/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 21:05:13 by asalah            #+#    #+#             */
/*   Updated: 2019/03/09 16:19:11 by asalah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		ft_error(void)
{
	write(1, "Error\n", 6);
	exit(1);
}

int			count_line(int fd)
{
	char	*line;
	int		len;

	len = 0;
	while (get_next_line(fd, &line))
		len++;
	return (len);
}

int			count_col(char **str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void		help_norminette(t_cord *fdf)
{
	if (fdf->k == 0)
		fdf->len = count_col(fdf->split);
	else if (fdf->len > count_col(fdf->split))
		ft_error();
}

void		read_file(char *argv, t_cord *fdf)
{
	char	*out;

	fdf->k = 0;
	fdf->fd = open(argv, O_RDONLY);
	if ((fdf->fd = open(argv, O_RDONLY)) < 0)
		ft_error();
	fdf->line = count_line(fdf->fd);
	fdf->fd = open(argv, O_RDONLY);
	fdf->nbr = (int **)malloc(sizeof(int *) * fdf->line);
	fdf->nbr_point = (int *)malloc(sizeof(int) * fdf->line);
	while (get_next_line(fdf->fd, &out))
	{
		fdf->i = 0;
		fdf->split = ft_strsplit(out, ' ');
		fdf->nbr[fdf->k] = (int *)malloc(sizeof(int) * count_col(fdf->split));
		help_norminette(fdf);
		fdf->nbr_point[fdf->k] = count_col(fdf->split);
		while (fdf->split[fdf->i])
		{
			fdf->nbr[fdf->k][fdf->i] = ft_atoi(fdf->split[fdf->i]);
			fdf->i++;
		}
		fdf->k++;
	}
	close(fdf->fd);
}

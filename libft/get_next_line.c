/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 16:19:28 by asalah            #+#    #+#             */
/*   Updated: 2019/03/09 15:47:49 by asalah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		get_next_line(const int fd, char **line)
{
	int				i;
	static char		*p[256];
	char			buf[BUFF_SIZE + 1];

	if (!line || fd < 0 || BUFF_SIZE < 1 || read(fd, buf, 0) < 0)
		return (-1);
	p[fd] = (!p[fd]) ? "" : p[fd];
	while ((i = read(fd, buf, BUFF_SIZE)))
	{
		if (i < 0)
			return (-1);
		buf[i] = '\0';
		p[fd] = ft_strjoin(p[fd], buf);
		if (ft_strchr(p[fd], '\n'))
			break ;
	}
	i = 0;
	if (p[fd][0] == '\0')
		return (0);
	while (p[fd][i] && p[fd][i] != '\n')
		i++;
	if (!(*line = ft_strsub(p[fd], 0, i)) ||
			!(p[fd] = (ft_strchr(p[fd], p[fd][i]) + 1)))
		return (-1);
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cordpar.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/08 16:47:30 by asalah            #+#    #+#             */
/*   Updated: 2019/03/09 12:53:44 by asalah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int			courdpar_x(int x, t_cord *fdf)
{
	return (fdf->toto * 17 + (x * fdf->momo));
}

int			courdpar_y(t_cord *fdf, int y, int z)
{
	return (fdf->toto * 9 + (y * fdf->momo) - (z * fdf->t));
}

void		iscordpar_x(t_cord *fdf, int **nbr, int line, int *nbr_point)
{
	int		x;
	int		y;

	y = 0;
	while (y < line - 1)
	{
		x = 0;
		while (x < nbr_point[y] && nbr_point[y + 1] - x > 0)
		{
			fdf->x1 = courdpar_x(x, fdf);
			fdf->y1 = courdpar_y(fdf, y, nbr[y][x]);
			fdf->x2 = courdpar_x(x, fdf);
			fdf->y2 = courdpar_y(fdf, y + 1, nbr[y + 1][x]);
			bresenham(fdf);
			x++;
		}
		y++;
	}
}

void		iscordpar_y(t_cord *fdf, int **nbr, int line, int *nbr_point)
{
	int		x;
	int		y;

	y = 0;
	while (y < line)
	{
		x = 0;
		while (x < nbr_point[y] - 1)
		{
			fdf->x1 = courdpar_x(x, fdf);
			fdf->y1 = courdpar_y(fdf, y, nbr[y][x]);
			x++;
			fdf->x2 = courdpar_x(x, fdf);
			fdf->y2 = courdpar_y(fdf, y, nbr[y][x]);
			bresenham(fdf);
		}
		y++;
	}
}

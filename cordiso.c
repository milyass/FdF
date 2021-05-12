/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cordiso.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/08 16:46:31 by asalah            #+#    #+#             */
/*   Updated: 2019/03/09 13:50:11 by asalah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int			courdiso_x(int x, int y, t_cord *fdf)
{
	return ((fdf->toto * 32 + (x * fdf->momo) -
				(y * fdf->momo)) * cos(0.523599));
}

int			courdiso_y(t_cord *fdf, int x, int y, int z)
{
	return ((fdf->toto * 15 + (x * fdf->momo) + (y * fdf->momo) -
				(z * fdf->t)) * sin(0.523599));
}

void		iscordiso_x(t_cord *fdf, int **nbr, int line, int *nbr_point)
{
	int		x;
	int		y;

	y = 0;
	while (y < line - 1)
	{
		x = 0;
		while (x < nbr_point[y] && nbr_point[y + 1] - x > 0)
		{
			fdf->x1 = courdiso_x(x, y, fdf);
			fdf->y1 = courdiso_y(fdf, x, y, nbr[y][x]);
			fdf->x2 = courdiso_x(x, y + 1, fdf);
			fdf->y2 = courdiso_y(fdf, x, y + 1, nbr[y + 1][x]);
			bresenham(fdf);
			x++;
		}
		y++;
	}
}

void		iscordiso_y(t_cord *fdf, int **nbr, int line, int *nbr_point)
{
	int		x;
	int		y;

	y = 0;
	while (y < line)
	{
		x = 0;
		while (x < nbr_point[y] - 1)
		{
			fdf->x1 = courdiso_x(x, y, fdf);
			fdf->y1 = courdiso_y(fdf, x, y, nbr[y][x]);
			x++;
			fdf->x2 = courdiso_x(x, y, fdf);
			fdf->y2 = courdiso_y(fdf, x, y, nbr[y][x]);
			bresenham(fdf);
		}
		y++;
	}
}

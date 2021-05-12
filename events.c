/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 20:59:05 by asalah            #+#    #+#             */
/*   Updated: 2019/03/09 15:59:11 by asalah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		isop(t_cord *fdf)
{
	fdf->t++;
	mlx_clear_window(fdf->ptr, fdf->win);
	mlx_string_put(fdf->ptr, fdf->win, 10, 10, 0xFFFFFF, "ESC : EXIT");
	iscordiso_x(fdf, fdf->nbr, fdf->line, fdf->nbr_point);
	iscordiso_y(fdf, fdf->nbr, fdf->line, fdf->nbr_point);
}

void		isom(t_cord *fdf)
{
	fdf->t--;
	mlx_clear_window(fdf->ptr, fdf->win);
	mlx_string_put(fdf->ptr, fdf->win, 10, 10, 0xFFFFFF, "ESC : EXIT");
	iscordiso_x(fdf, fdf->nbr, fdf->line, fdf->nbr_point);
	iscordiso_y(fdf, fdf->nbr, fdf->line, fdf->nbr_point);
}

void		parp(t_cord *fdf)
{
	fdf->t++;
	mlx_clear_window(fdf->ptr, fdf->win);
	mlx_string_put(fdf->ptr, fdf->win, 10, 10, 0xFFFFFF, "ESC : EXIT");
	iscordpar_x(fdf, fdf->nbr, fdf->line, fdf->nbr_point);
	iscordpar_y(fdf, fdf->nbr, fdf->line, fdf->nbr_point);
}

void		parm(t_cord *fdf)
{
	fdf->t--;
	mlx_clear_window(fdf->ptr, fdf->win);
	mlx_string_put(fdf->ptr, fdf->win, 10, 10, 0xFFFFFF, "ESC : EXIT");
	iscordpar_x(fdf, fdf->nbr, fdf->line, fdf->nbr_point);
	iscordpar_y(fdf, fdf->nbr, fdf->line, fdf->nbr_point);
}

int			key_press(int key, t_cord *fdf)
{
	if (key == 53)
		exit(1);
	else if (key == 35)
	{
		mlx_clear_window(fdf->ptr, fdf->win);
		mlx_string_put(fdf->ptr, fdf->win, 10, 10, 0xFFFFFF, "ESC : EXIT");
		iscordpar_x(fdf, fdf->nbr, fdf->line, fdf->nbr_point);
		iscordpar_y(fdf, fdf->nbr, fdf->line, fdf->nbr_point);
	}
	else if (key == 34)
	{
		mlx_clear_window(fdf->ptr, fdf->win);
		mlx_string_put(fdf->ptr, fdf->win, 10, 10, 0xFFFFFF, "ESC : EXIT");
		iscordiso_x(fdf, fdf->nbr, fdf->line, fdf->nbr_point);
		iscordiso_y(fdf, fdf->nbr, fdf->line, fdf->nbr_point);
	}
	else if (key == 12)
		isop(fdf);
	else if (key == 13)
		isom(fdf);
	else if (key == 6)
		parp(fdf);
	else if (key == 7)
		parm(fdf);
	return (0);
}

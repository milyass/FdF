/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 21:02:33 by asalah            #+#    #+#             */
/*   Updated: 2019/03/09 14:47:18 by asalah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int			main(int argc, char **argv)
{
	t_cord	fdf;

	fdf.t = 3;
	if (argc != 2)
	{
		ft_putstr("Usage : ./fdf file.fdf\n");
		return (0);
	}
	read_file(argv[1], &fdf);
	fdf.ptr = mlx_init();
	toto(&fdf);
	fdf.win = mlx_new_window(fdf.ptr, 75 * fdf.toto, 50 * fdf.toto, "FDF");
	iscordiso_x(&fdf, fdf.nbr, fdf.line, fdf.nbr_point);
	iscordiso_y(&fdf, fdf.nbr, fdf.line, fdf.nbr_point);
	mlx_string_put(fdf.ptr, fdf.win, 10, 10, 0xFFFFFF, "ESC : EXIT");
	mlx_hook(fdf.win, 2, 0, &key_press, &fdf);
	mlx_loop(fdf.ptr);
	free(fdf.nbr);
	free(fdf.split);
	return (0);
}

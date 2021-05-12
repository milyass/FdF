/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/08 18:15:02 by asalah            #+#    #+#             */
/*   Updated: 2019/03/09 16:19:04 by asalah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# include <math.h>
# include <stdio.h>
# include <stdlib.h>
# include <mlx.h>
# include "libft/libft.h"
# include <fcntl.h>

typedef struct	s_cord
{
	void		*ptr;
	void		*win;
	int			x1;
	int			y1;
	int			x2;
	int			y2;
	int			dx;
	int			dy;
	int			incx;
	int			incy;
	int			i;
	int			**nbr;
	int			line;
	int			*nbr_point;
	int			fd;
	int			k;
	char		**split;
	int			t;
	int			o;
	int			toto;
	int			momo;
	int			len;
}				t_cord;

int				key_press(int key, t_cord *fdf);
void			isline(void *mlx, void *win, int x0,
		int y0, int x1, int y1, int color);
void			is_space(char **p);
int				count_line(int fd);
int				count_col(char **str);
void			read_file(char *argv, t_cord *fdf);
void			bresenham(t_cord *fdf);
int				courdiso_x(int x, int y, t_cord *fdf);
int				courdiso_y(t_cord *fdf, int x, int y, int z);
void			iscordiso_x(t_cord *fdf, int **nbr, int line, int *nbr_point);
void			iscordiso_y(t_cord *fdf, int **nbr, int line, int *nbr_point);
int				courdpar_x(int x, t_cord *fdf);
int				courdpar_y(t_cord *fdf, int y, int z);
void			iscordpar_x(t_cord *fdf, int **nbr, int line, int *nbr_point);
void			iscordpar_y(t_cord *fdf, int **nbr, int line, int *nbr_point);
void			toto(t_cord *fdf);
void			help_norminette(t_cord *fdf);
void			ft_error(void);
#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/09 11:31:20 by asalah            #+#    #+#             */
/*   Updated: 2019/03/09 14:43:20 by asalah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	toto(t_cord *fdf)
{
	if (fdf->line <= 25)
	{
		fdf->toto = fdf->line;
		fdf->momo = 20;
	}
	else if (fdf->line > 25 && fdf->line <= 100)
	{
		fdf->toto = 25;
		fdf->momo = 10;
	}
	else if (fdf->line > 100 && fdf->line <= 250)
	{
		fdf->toto = 25;
		fdf->momo = 5;
	}
	else if (fdf->line > 250)
	{
		fdf->toto = 25;
		fdf->momo = 2;
	}
}

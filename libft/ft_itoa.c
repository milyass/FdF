/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 15:29:38 by asalah            #+#    #+#             */
/*   Updated: 2018/10/24 12:08:15 by asalah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		a;
	int		b;
	int		sign;
	char	*nb;

	b = n;
	a = !(n);
	sign = ((n < 0) ? 1 : 0);
	while (b != 0)
	{
		a++;
		b = b / 10;
	}
	nb = (char *)ft_memalloc(sizeof(char) * (a + 1 + sign));
	if (!nb)
		return (NULL);
	nb[0] = '-';
	while (a > 0)
	{
		b = n % 10;
		nb[--a + sign] = '0' + (b < 0 ? -b : b);
		n = (n - b) / 10;
	}
	return (nb);
}

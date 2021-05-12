/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 12:11:19 by asalah            #+#    #+#             */
/*   Updated: 2018/10/24 12:18:21 by asalah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_words(char const *s, char c)
{
	int		len;
	int		number;

	len = 0;
	number = 0;
	while (*s)
	{
		if (*s == c)
			len = 0;
		else if (++len == 1)
			number++;
		s++;
	}
	return (number);
}

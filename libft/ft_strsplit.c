/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 13:01:20 by asalah            #+#    #+#             */
/*   Updated: 2018/10/24 16:46:59 by asalah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		len;
	int		i;
	int		j;
	char	**r;

	if (!s)
		return (0);
	if (!(r = (char**)malloc(sizeof(char*) * (ft_count_words(s, c) + 1))))
		return (0);
	i = 0;
	j = 0;
	len = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		len = i;
		while (s[i] && s[i] != c)
			i++;
		if (len < i)
			r[j++] = ft_strndup(s + len, i - len);
	}
	r[j] = NULL;
	return (r);
}

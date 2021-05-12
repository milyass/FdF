/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 14:09:55 by asalah            #+#    #+#             */
/*   Updated: 2018/10/24 16:36:49 by asalah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char	*s;

	s = (char *)malloc(sizeof(char) * (n + 1));
	if (s == NULL)
		return (NULL);
	s = ft_strncpy(s, s1, n);
	s[n] = '\0';
	return (s);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 12:09:00 by asalah            #+#    #+#             */
/*   Updated: 2018/10/26 16:33:02 by asalah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == ((char)c))
			return ((char*)&s[i]);
		i--;
	}
	if ((char)c == '\0')
		return ((char*)&s[i]);
	if ((char)c == ' ')
		return ((char*)&s[i]);
	return (NULL);
}

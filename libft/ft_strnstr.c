/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 17:30:18 by asalah            #+#    #+#             */
/*   Updated: 2018/10/27 16:58:20 by asalah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t		i;
	char		*ps1;
	char		*ps2;
	int			len;

	if (*s2 == '\0')
		return ((char *)s1);
	ps1 = (char *)s1;
	ps2 = (char *)s2;
	len = ft_strlen(ps2);
	i = 0;
	while (ps1[i] != '\0' && (i + len) <= n)
	{
		if (ft_strncmp(s1 + i, s2, len) == 0)
		{
			return (ps1 + i);
		}
		i++;
	}
	return (NULL);
}

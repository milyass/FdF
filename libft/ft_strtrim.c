/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 13:52:10 by asalah            #+#    #+#             */
/*   Updated: 2018/10/22 14:45:03 by asalah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*ptr;
	size_t	i;

	if (!s)
		return (NULL);
	ptr = ft_strdup(s);
	if (!ptr)
		return (NULL);
	while (*ptr == '\n' || *ptr == '\t' || *ptr == ' ')
		ptr++;
	i = ft_strlen(ptr) - 1;
	while (ptr[i] == '\n' || ptr[i] == '\t' || ptr[i] == ' ')
		i--;
	ptr[++i] = '\0';
	return (ft_strdup(ptr));
}

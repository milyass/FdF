/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/16 12:44:50 by asalah            #+#    #+#             */
/*   Updated: 2018/10/26 15:05:07 by asalah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;

	s = (char *)malloc(len);
	if (!s)
		return (dst);
	s = ft_memcpy(s, src, len);
	dst = ft_memcpy(dst, s, len);
	free(s);
	return (dst);
}

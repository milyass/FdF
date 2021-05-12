/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/20 16:35:09 by asalah            #+#    #+#             */
/*   Updated: 2018/10/20 16:58:54 by asalah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = malloc(size + 1);
	if (ptr == NULL)
		return (NULL);
	while (ptr[i])
		i++;
	ft_bzero(ptr, size + 1);
	return (ptr);
}

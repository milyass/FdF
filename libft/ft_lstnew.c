/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 18:32:44 by asalah            #+#    #+#             */
/*   Updated: 2018/10/26 19:11:16 by asalah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*ptr;

	ptr = (t_list *)malloc(sizeof(t_list));
	if (!ptr)
		return (NULL);
	if (content == NULL)
	{
		ptr->content_size = 0;
		ptr->content = NULL;
	}
	else
	{
		ptr->content = (void *)malloc(content_size);
		if (ptr)
		{
			ptr->content_size = content_size;
			ptr->content = ft_memcpy(ptr->content, content, content_size);
		}
	}
	ptr->next = NULL;
	return (ptr);
}

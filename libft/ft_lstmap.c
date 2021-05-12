/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 13:59:31 by asalah            #+#    #+#             */
/*   Updated: 2018/10/27 16:36:05 by asalah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*a;
	t_list	*b;

	if (!lst)
		return (NULL);
	a = f(lst);
	if (a == NULL)
		return (NULL);
	b = a;
	while (lst->next)
	{
		lst = lst->next;
		b->next = f(lst);
		if (b->next == NULL)
			return (NULL);
		b = b->next;
	}
	return (a);
}

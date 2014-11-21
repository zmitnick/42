/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 14:00:57 by mstephan          #+#    #+#             */
/*   Updated: 2014/11/19 16:33:55 by mstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*aux;
	t_list	*ret;

	if (lst)
	{
		ret = f(lst);
		lst = lst->next;
	}
	aux = ret;
	while (lst)
	{
		aux->next = f(lst);
		aux = aux->next;
		lst = lst->next;
	}
	return (ret);
}

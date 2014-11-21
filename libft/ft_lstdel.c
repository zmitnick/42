/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 12:34:51 by mstephan          #+#    #+#             */
/*   Updated: 2014/11/19 16:31:27 by mstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list *aux;
	t_list *aux2;

	aux = *alst;
	aux2 = *alst;
	if (*alst)
	{
		while (*alst)
		{
			aux = (*alst)->next;
			del ((*alst)->content, (*alst)->content_size);
			free(*alst);
			(*alst) = aux;
		}
	}
	aux2->next = NULL;
}

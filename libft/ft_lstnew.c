/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 08:20:52 by mstephan          #+#    #+#             */
/*   Updated: 2014/11/28 00:28:18 by mstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*list;
	void	*ctnt;

	ctnt = (void *)ft_memalloc(content_size + 1);
	if (content == NULL)
	{
		ctnt = NULL;
		content_size = 0;
	}
	else
		ctnt = ft_memcpy(ctnt, content, content_size);
	list = (t_list *)ft_memalloc(sizeof(t_list));
	if (list != (t_list *)NULL)
	{
		list->content_size = content_size;
		list->next = NULL;
		list->content = ctnt;
	}
	return (list);
}

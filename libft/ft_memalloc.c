/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 15:21:24 by mstephan          #+#    #+#             */
/*   Updated: 2014/11/29 04:03:27 by mstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*str;
	int		i;

	if ((int)size <= 0)
		return (0);
	str = malloc(size);
	i = 0;
	while (i < (int)size)
	{
		str[i] = 0;
		i++;
	}
	return ((void*)str);
}

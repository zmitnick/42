/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 12:39:05 by mstephan          #+#    #+#             */
/*   Updated: 2014/11/19 21:22:10 by mstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t len)
{
	unsigned char		*ptr1;
	const unsigned char *ptr2;
	unsigned int		i;

	i = 0;
	ptr1 = (unsigned char *)s1;
	ptr2 = (const unsigned char *)s2;
	while (i < len)
	{
		*(ptr1 + i) = *(ptr2 + i);
		i++;
	}
	return ((void *)ptr1);
}

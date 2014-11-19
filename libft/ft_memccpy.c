/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 11:25:09 by mstephan          #+#    #+#             */
/*   Updated: 2014/11/19 21:35:09 by mstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int n, size_t len)
{
	unsigned char		*ptr1;
	const unsigned char *ptr2;
	unsigned int		i;

	i = 0;
	ptr1 = (unsigned char *)s1;
	ptr2 = (const unsigned char *)s2;
	while (i < len)
	{
		if (*(ptr2 + i) == n)
		{
			*(ptr1 + i) = *(ptr2 + i);
			return ((void *)(ptr1 + i + 1));
		}
		*(ptr1 + i) = *(ptr2 + i);
		i++;
	}
	return (NULL);
}

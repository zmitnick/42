/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 14:57:54 by mstephan          #+#    #+#             */
/*   Updated: 2014/11/19 21:17:01 by mstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t len)
{
	unsigned char		*ptr1;
	const unsigned char *ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (const unsigned char *)s2;
	if (!len)
		return (ptr1);
	if (ft_strlen((const char *)ptr1) > ft_strlen((const char *)ptr2))
		return (ft_memcpy(s1, s2, len));
	s2 += len;
	s1 += len;
	while ((int)len > 0)
	{
		*(ptr1 + len - 1) = *(ptr2 + len - 1);
		len--;
	}
	return ((void *)ptr1);
}

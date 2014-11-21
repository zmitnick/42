/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/15 15:03:07 by mstephan          #+#    #+#             */
/*   Updated: 2014/11/21 12:45:32 by mstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s1, int c, size_t n)
{
	const unsigned char *ptr1;
	int					i;

	ptr1 = (const unsigned char *)s1;
	i = 0;
	while (n > 0 && *(ptr1 + i))
	{
		if (*(ptr1 + i) == (const unsigned char)c)
			return ((void *)(ptr1 + i));
		n--;
		i++;
	}
	if (*(ptr1 + i) == (const unsigned char)c)
		return ((void *)(ptr1 + i));
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/15 15:03:07 by mstephan          #+#    #+#             */
/*   Updated: 2014/11/29 03:45:41 by mstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int			i;
	const char	*d;

	d = (const char *)s;
	i = 0;
	if (n <= 0)
		return (NULL);
	while (n--)
	{
		if ((unsigned char)d[i] == (unsigned char)c)
			return ((void *)(d + i));
		i++;
	}
	return (NULL);
}

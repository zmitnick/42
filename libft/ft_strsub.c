/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 11:50:11 by mstephan          #+#    #+#             */
/*   Updated: 2014/11/21 13:00:17 by mstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	c;
	char			*dest;

	if (s == NULL)
		return (NULL);
	dest = ft_strnew (len + 1);
	c = 0;
	if (dest == NULL)
		return (NULL);
	while (c < len + start)
	{
		if (c >= start)
		{
			dest[c - start] = s[c];
		}
		c++;
	}
	return (dest);
}

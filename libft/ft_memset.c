/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/15 14:29:10 by mstephan          #+#    #+#             */
/*   Updated: 2014/11/29 03:31:56 by mstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*s;
	int				i;

	i = 0;
	s = b;
	while (len > 0)
	{
		s[i] = c;
		i++;
		len--;
	}
	return (b);
}

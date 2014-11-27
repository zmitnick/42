/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 14:57:54 by mstephan          #+#    #+#             */
/*   Updated: 2014/11/27 04:03:41 by mstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	char		*dp;
	const char	*sp;

	sp = s2;
	dp = s1;
	if (s1 <= s2)
		return (ft_memcpy(s1, s2, n));
	sp += n;
	dp += n;
	while (n--)
		*--dp = *--sp;
	return (s1);
}

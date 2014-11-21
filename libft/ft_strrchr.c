/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 09:57:10 by mstephan          #+#    #+#             */
/*   Updated: 2014/11/20 17:32:37 by mstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int k;

	i = 0;
	k = -1;
	if (c == 0)
		return ((char *)(s + ft_strlen(s)));
	while (*(s + i))
	{
		if (*(s + i) == (char)c)
			k = i;
		i++;
	}
	if (k != -1)
		return ((char *)(s + k));
	return (0);
}

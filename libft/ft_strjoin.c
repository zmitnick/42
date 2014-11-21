/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 16:58:26 by mstephan          #+#    #+#             */
/*   Updated: 2014/11/19 17:33:16 by mstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*rez;
	int		i;
	int		j;

	i = 0;
	j = 0;
	rez = ft_memalloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	while (*(s1 + i))
	{
		*(rez + i) = *(s1 + i);
		i++;
	}
	while (*(s2 + j))
	{
		*(rez + i) = *(s2 + j);
		i++;
		j++;
	}
	*(rez + i) = '\0';
	return (rez);
}

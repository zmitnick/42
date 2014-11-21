/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 17:03:52 by mstephan          #+#    #+#             */
/*   Updated: 2014/11/21 13:01:53 by mstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_is_space(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	else
		return (0);
}

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		k;
	char	*rez;

	i = 0;
	j = ft_strlen(s) - 1;
	k = 0;
	rez = ft_memalloc(ft_strlen(s) + 1);
	while (ft_is_space(*(s + i)))
		i++;
	while (ft_is_space(*(s + j)) && j > 0)
		j--;
	while (*(s + i) && i <= j)
	{
		*(rez + k) = *(s + i);
		k++;
		i++;
	}
	*(rez + k) = '\0';
	return (rez);
}

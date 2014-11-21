/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 21:59:03 by mstephan          #+#    #+#             */
/*   Updated: 2014/11/21 12:57:42 by mstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int		i;
	int		k;
	int		j;
	char	*aux;

	i = 0;
	j = 0;
	aux = (char*)malloc(sizeof(char) * ft_strlen(s2) + 1);
	while (*(s1 + i) && ((int)(n - ft_strlen(s2) + 1) > 0))
	{
		k = ft_strlen(s2);
		j = 0;
		while (*(s1 + i + j) && k--)
		{
			aux[j] = s1[i + j];
			j++;
		}
		aux[j] = '\0';
		if (ft_strcmp(aux, s2) == 0)
			return ((char *)(s1 + i));
		else
			i++;
		n--;
	}
	return (0);
}

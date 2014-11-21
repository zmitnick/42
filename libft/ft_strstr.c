/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 17:32:12 by mstephan          #+#    #+#             */
/*   Updated: 2014/11/20 16:09:23 by mstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		c;
	int		j;
	char	*aux;

	i = 0;
	j = 0;
	aux = (char*)malloc(sizeof(char) * ft_strlen(s2) + 1);
	while (*(s1 + i))
	{
		c = ft_strlen(s2);
		j = 0;
		while (*(s1 + i + j) && c)
		{
			aux[j] = s1[i + j];
			j++;
			c--;
		}
		aux[j] = '\0';
		if (ft_strcmp(aux, s2) == 0)
			return ((char *)(s1 + i));
		else
			i++;
	}
	return (0);
}

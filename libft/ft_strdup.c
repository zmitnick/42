/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 10:04:58 by mstephan          #+#    #+#             */
/*   Updated: 2014/11/19 17:27:16 by mstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	char	*aux;
	int		i;

	i = 0;
	s2 = (char *)(malloc(sizeof(const char) * ft_strlen(s1) + 1));
	aux = s2;
	while (*(s1 + i))
	{
		*(s2 + i) = *(s1 + i);
		i++;
	}
	*(aux + i) = '\0';
	return (aux);
}

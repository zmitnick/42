/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 15:18:12 by mstephan          #+#    #+#             */
/*   Updated: 2014/11/19 17:41:56 by mstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *str, char (*f)(char))
{
	char	*rez;
	int		i;

	i = 0;
	rez = (char *)malloc(sizeof(char) * ft_strlen(str) + 1);
	while (*(str + i))
	{
		*(rez + i) = f(*(str + i));
		i++;
	}
	*(rez + i) = '\0';
	return (rez);
}

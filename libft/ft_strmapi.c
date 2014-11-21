/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 16:15:54 by mstephan          #+#    #+#             */
/*   Updated: 2014/11/19 17:42:40 by mstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	char			*rez;
	unsigned int	i;

	i = 0;
	rez = (char *)malloc(sizeof(char) * ft_strlen(str) + 1);
	while (*(str + i))
	{
		*(rez + i) = f(i, *(str + i));
		i++;
	}
	*(rez + i) = '\0';
	return (rez);
}

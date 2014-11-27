/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 16:15:54 by mstephan          #+#    #+#             */
/*   Updated: 2014/11/27 06:55:10 by mstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*cpy;

	if (s && f)
	{
		i = 0;
		len = ft_strlen(s);
		cpy = ft_strnew(len + 1);
		cpy = ft_strncpy(cpy, s, len);
		while (cpy[i] != '\0')
		{
			cpy[i] = f(i, cpy[i]);
			i++;
		}
		return (cpy);
	}
	return (NULL);
}

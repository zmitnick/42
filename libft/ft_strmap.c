/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 15:18:12 by mstephan          #+#    #+#             */
/*   Updated: 2014/11/27 06:14:04 by mstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
			cpy[i] = f(cpy[i]);
			i++;
		}
		return (cpy);
	}
	return (NULL);
}

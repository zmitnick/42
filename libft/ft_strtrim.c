/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 17:03:52 by mstephan          #+#    #+#             */
/*   Updated: 2014/11/27 09:17:13 by mstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char            *ft_strtrim(char const *s)
{
	size_t        i;
	size_t        j;
	int           space;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	space = 1;
	while (s[i] != '\0')
	{
		if (ft_isspace(s[i]) == 0)
		{
			if (j > 0 && space == 1)
				s[j++] = ' ';
			space = 0;
			s[j] = s[i];
			j++;
		}
		else
			space = 1;
		i++;
	}
	ft_bzero((s + j), i - j);
	return (s);
}

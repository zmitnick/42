/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 16:58:26 by mstephan          #+#    #+#             */
/*   Updated: 2014/11/29 03:25:25 by mstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	int		n;
	int		c;
	char	*fin;

	if (s1 == NULL && s2 == NULL)
		return ((char *)NULL);
	if (s1 == NULL && s2)
		return (ft_strdup(s2));
	if (s2 == NULL && s1)
		return (ft_strdup(s1));
	c = -1;
	len = ft_strlen (s1);
	n = len + ft_strlen(s2) + 1;
	fin = ft_strnew (n);
	if (fin == NULL)
		return (NULL);
	while (++c < n)
	{
		if (c < len)
			fin[c] = s1[c];
		else
			fin[c] = s2[c - len];
	}
	return (fin);
}

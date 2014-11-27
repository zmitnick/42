/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 13:51:41 by mstephan          #+#    #+#             */
/*   Updated: 2014/11/27 07:58:41 by mstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nb_part_str(char const *s, char c)
{
	char	*p;
	int		result;

	p = (char*)s;
	result = 0;
	while (*p != '\0' && *p == c)
	{
		p++;
	}
	if (*p == '\0')
		return (0);
	while (p && *p != '\0')
	{
		result++;
		p = ft_strchr(p, c);
		while (p && *p == c)
		{
			p++;
		}
	}
	return (result);
}

static int	len_part(char *s, char c)
{
	char	*p;

	p = ft_strchr(s, c);
	if (p)
	{
		return (p - s);
	}
	else
	{
		return (ft_strlen(s));
	}
}

static char	**strsplit2(char **parent, char const *s, char c, int len)
{
	char	*p;
	int		i;
	int		lenpart;

	p = (char*)s;
	i = 0;
	while (*p == c)
	{
		p++;
	}
	while (i < len)
	{
		lenpart = len_part(p, c);
		parent[i] = ft_strnew(lenpart);
		parent[i] = ft_strncpy(parent[i], p, lenpart);
		p += lenpart;
		while (i < len - 1 && *p == c)
		{
			p++;
		}
		i++;
	}
	return (parent);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**parent;
	int		len;

	if (s)
	{
		if (ft_strequ(s, ""))
		{
			parent = (char**)(malloc(sizeof(char*) * 2));
			parent[0] = NULL;
			parent[1] = 0;
			return (parent);
		}
		len = nb_part_str(s, c);
		parent = (char**)(malloc(sizeof(char*) * (len + 1)));
		parent[len] = 0;
		if (len == 0)
		{
			return (parent);
		}
		return (strsplit2(parent, s, c, len));
	}
	return (NULL);
}

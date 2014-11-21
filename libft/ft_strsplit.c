/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 13:51:41 by mstephan          #+#    #+#             */
/*   Updated: 2014/11/21 12:59:40 by mstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	c_words(char const *s, char c)
{
	int	w;
	int	state;

	state = 0;
	w = 0;
	while (*s)
	{
		if (*s != c)
		{
			if (state == 0)
			{
				state = 1;
				++w;
			}
		}
		else
			state = 0;
		++s;
	}
	return (w);
}

static int	ft_len(char const *s, char c)
{
	int i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**ret;
	int		words;
	int		i;
	int		j;
	int		len;

	words = c_words(s, c);
	ret = (char **)ft_memalloc(sizeof(char *) * (words + 1));
	i = 0;
	while (i < words)
	{
		while (*s == c)
			++s;
		len = ft_len(s, c);
		ret[i] = (char *)ft_memalloc(sizeof(char) * (len + 1));
		j = -1;
		while (*s != c && *s)
		{
			ret[i][++j] = *s;
			++s;
		}
		++i;
	}
	return (ret);
}

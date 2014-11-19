/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/17 15:59:42 by mstephan          #+#    #+#             */
/*   Updated: 2014/11/19 22:17:27 by mstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static void		ft_detch(int n, int *i)
{
	(*i) = 0;
	while (n)
	{
		n = n / 10;
		(*i)++;
	}
}

static void		ft_aux(int *n, char **rez, int *i)
{
	if (*n < 0)
	{
		*n = -(*n);
		*rez = (char*)ft_memalloc(sizeof(char) * (*i) + 1);
		(*rez)[0] = '-';
		(*i)++;
	}
	else
		*rez = (char*)ft_memalloc(sizeof(char) * (*i));
}

static void		ft_aux2(int *i, char **rez, int n)
{
	while ((*i) > 0 && (*rez)[(*i) - 1] != '-')
	{
		(*rez)[(*i) - 1] = n % 10 + '0';
		n = n / 10;
		(*i)--;
	}
}

char			*ft_itoa(int n)
{
	char	*rez;
	int		i;

	if (n == -2147483648)
		return ("-2147483648");
	ft_detch(n, &i);
	if (i == 0)
	{
		rez = (char*)ft_memalloc(sizeof(char) * 2);
		rez[0] = '0';
		rez[1] = '\0';
	}
	else
	{
		ft_aux(&n, &rez, &i);
		if (rez == NULL)
			return (NULL);
		rez[i] = '\0';
		ft_aux2(&i, &rez, n);
	}
	return (rez);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/17 15:59:42 by mstephan          #+#    #+#             */
/*   Updated: 2014/11/27 08:08:13 by mstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nb_count(int n, int i)
{
	while (n > 9 || n < 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	char	*nbstr;
	char	*nbcut;
	int		nblen;
	int		nb;
	int		i;

	nblen = (n < 0) ? 2 : 1;
	nb = n;
	i = ft_nb_count(n, nblen);
	nbcut = ft_strnew(i + 1);
	while (i > 0)
	{
		if (n >= 0)
			nbcut[i - 1] = ((char)((nb % 10) + 48));
		if (n < 0 && i >= 2)
			nbcut[i - 2] = ((char)(48 - (nb % 10)));
		i--;
		nb /= 10;
	}
	if (n < 0)
		nbcut[i] = '-';
	nbstr = ft_strnew(ft_nb_count(n, nblen) + 1);
	ft_strcpy(nbstr, nbcut);
	free(nbcut);
	return (nbstr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmagurea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 18:09:07 by fmagurea          #+#    #+#             */
/*   Updated: 2014/11/07 18:14:58 by fmagurea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*rez;
	int		i;

	i = 0;
	rez = (char *)malloc((int)size);
	while (i < (int)size)
	{
		rez[i] = '\0';
		i++;
	}
	return (rez);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 15:09:01 by mstephan          #+#    #+#             */
/*   Updated: 2014/11/27 06:10:25 by mstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int		len;
	int		counter;

	if (s != NULL && f != NULL)
	{
		len = ft_strlen(s);
		counter = 0;
		while (counter < len)
		{
			(*f)(counter, s);
			s++;
			counter++;
		}
	}
}

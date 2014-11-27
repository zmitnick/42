/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 15:03:25 by mstephan          #+#    #+#             */
/*   Updated: 2014/11/27 06:08:49 by mstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_striter(char *s, void (*f)(char *))
{
	int		len;
	int		counter;

	if (s != NULL && f != NULL)
	{
		len = ft_strlen(s);
		counter = 0;
		while (counter < len)
		{
			(*f)(s);
			s++;
			counter++;
		}
	}
}

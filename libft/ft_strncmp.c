/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 17:19:45 by mstephan          #+#    #+#             */
/*   Updated: 2014/11/19 17:48:16 by mstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;

	i = 0;
	if (n == 0)
		return (0);
	while (*(s1 + i) && *(s2 + i) && n)
	{
		if (*(s1 + i) == *(s2 + i))
		{
			i++;
			n--;
		}
		else
			return (*(s1 + i) - *(s2 + i));
	}
	if (n != 0)
		return (*(s1 + i) - *(s2 + i));
	else
		return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 14:27:22 by mstephan          #+#    #+#             */
/*   Updated: 2014/11/19 17:50:35 by mstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int it;

	it = 0;
	while (*(src + it) != '\0' && it < n)
	{
		*(dest + it) = *(src + it);
		it++;
	}
	while (it < n)
	{
		*(dest + it) = '\0';
		it++;
	}
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 17:32:12 by mstephan          #+#    #+#             */
/*   Updated: 2014/11/27 04:10:49 by mstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char const *hstack, char const *needle)
{
	char	*start;
	size_t	nlen;

	nlen = ft_strlen(needle);
	if (!needle || !nlen || !hstack)
		return ((char*)hstack);
	start = (char*)hstack;
	while ((start = ft_strchr(start, *needle)))
	{
		if (!ft_strncmp(start, needle, nlen))
			return (start);
		start++;
	}
	return (NULL);
}

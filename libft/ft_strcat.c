/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 16:35:30 by mstephan          #+#    #+#             */
/*   Updated: 2014/11/20 15:15:02 by mstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcat(char *s1, const char *s2)
{
	int i;
	int c;

	i = 0;
	c = 0;
	while (*(s1 + i))
		i++;
	while (*(s2 + c))
	{
		*(s1 + i + c) = *(s2 + c);
		c++;
	}
	*(s1 + i + c) = '\0';
	return (s1);
}
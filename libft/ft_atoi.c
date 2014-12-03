/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/03 07:31:36 by mstephan          #+#    #+#             */
/*   Updated: 2014/12/03 07:31:56 by mstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *str)
{
	int nb;
	int i;
	int neg;

	i = 0;
	nb = 0;
	neg = 1;
	while (*(str + i) == 32 || (*(str + i) >= 9 && *(str + i) <= 13))
		i++;
	if (*(str + i) == 45)
	{
		neg = -1;
		i++;
	}
	else if (*(str + i) == 43)
		i++;
	while (*(str + i) >= 48 && *(str + i) <= 57)
	{
		nb = nb * 10 + *(str + i) - 48;
		i++;
	}
	return (neg * nb);
}

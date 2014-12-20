/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/20 15:08:58 by mstephan          #+#    #+#             */
/*   Updated: 2014/12/20 15:34:11 by mstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ulstr(char *str)
{
	int i;
	char c;

	i = 0;
	while (str[i])
	{
		c = str[i];
		if (str[i] >= 'a' && str[i] <= 'z')
			c = c - 32;
		if (str[i] >= 'A' && str[i] <= 'Z')
			c = c + 32;
		ft_putchar(c);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc = 2)
		ulstr(argv[1]);
	ft_putchar('\n');
	return (0);
}

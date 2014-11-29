/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/28 09:29:24 by mstephan          #+#    #+#             */
/*   Updated: 2014/11/29 04:13:40 by mstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

static int			ft_isspace(char c)
{
	return (c == ' ' || c == '\n' || c == '\t' || c == '\v' || c == '\r'
	|| c == '\f');
}

static int			sp_continue(char c)
{
	return (c != '\0' && (ft_isspace(c) == 1 || (c == '+') || (c == '-')));
}

static const char	*skip_space(const char *str, int *positive)
{
	int	sp_flag;

	sp_flag = 0;
	while (sp_continue(*str))
	{
		if (ft_isspace(*str) && sp_flag > 0)
			return (NULL);
		if (*str == '-')
		{
			(*positive) *= -1;
			if (sp_flag > 0)
				return (NULL);
			else
				sp_flag += 1;
		}
		else if (*str == '+')
		{
			if (sp_flag > 0)
				return (NULL);
			else
				sp_flag += 1;
		}
		str += 1;
	}
	return (str);
}

int					ft_atoi(char const *str)
{
	int	result;
	int	positive;
	int	n;

	result = 0;
	positive = 1;
	str = skip_space(str, &positive);
	while (str != NULL && *str != '\0')
	{
		if (ft_isdigit(*str) == 0)
			break ;
		result *= 10;
		n = (int)(*str - '0');
		result += n;
		str += 1;
	}
	return (result * positive);
}

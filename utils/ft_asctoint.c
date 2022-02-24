/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_asctoint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuanena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:22:41 by sjuanena          #+#    #+#             */
/*   Updated: 2022/02/09 17:23:25 by sjuanena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static	int	check_sign(char *str)
{
	if (*str == '-')
		return (-1);
	else if (*str == '+')
		return (1);
	else
		return (0);
}

static int	check_limits(long number, int sign)
{
	if (number * sign <= -2147483649 || number * sign >= 2147483648)
	{
		write(2, "Error\n", 6);
		exit (0);
	}
	else
		return (number * sign);
}

long	ft_asctoint(char *str)
{
	size_t	i;
	int		sign;
	long	number;

	number = 0;
	i = 0;
	sign = check_sign(str);
	if (sign == -1 || sign == 1)
		i++;
	if (sign == 0)
		sign = 1;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
		{
			write(2, "Error\n", 6);
			exit(0);
		}
		number *= 10;
		number += str[i] - '0';
		i++;
	}
	return (check_limits(number, sign));
}

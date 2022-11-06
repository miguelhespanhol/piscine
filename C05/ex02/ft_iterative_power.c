/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miribeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:43:36 by miribeir          #+#    #+#             */
/*   Updated: 2022/10/09 16:49:35 by miribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	double	res;

	res = nb;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	while (--power)
	{
		res *= nb;
		if (res < -2147483648 || res > 2147483647)
		{
			return (0);
		}
	}
	return (res);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_iterative_power(2, 3));
	return (0);
}*/

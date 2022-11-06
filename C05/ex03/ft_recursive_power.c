/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miribeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:25:08 by miribeir          #+#    #+#             */
/*   Updated: 2022/10/09 17:30:05 by miribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	else if (power != 0)
	{
		return (nb * ft_recursive_power(nb, --power));
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_recursive_power(2, 3));
	return (0);
}*/

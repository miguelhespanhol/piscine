/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miribeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:42:04 by miribeir          #+#    #+#             */
/*   Updated: 2022/10/08 17:48:05 by miribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fatorial;

	fatorial = nb;
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	if (nb == 0)
	{
		fatorial++;
	}
	while (nb > 1)
	{
		fatorial *= --nb;
	}
	return (fatorial);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_iterative_factorial(14);
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miribeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 11:43:48 by miribeir          #+#    #+#             */
/*   Updated: 2022/09/25 12:25:20 by miribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int b)
{
	if (b == -2147483648)
	{	
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (b < 0)
	{
		ft_putchar('-');
		b = -b;
		ft_putnbr(b);
	}
	else if (b > 9)
	{
		ft_putnbr(b / 10);
		ft_putnbr(b % 10);
	}
	else
	{
		ft_putchar(b + 48);
	}
}

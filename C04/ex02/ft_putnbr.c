/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miribeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:46:23 by miribeir          #+#    #+#             */
/*   Updated: 2022/10/05 11:54:49 by miribeir         ###   ########.fr       */
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
/*
int	main(void)
{
	ft_putnbr(-54623);
	return (0);

}*/

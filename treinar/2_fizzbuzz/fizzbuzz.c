/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miribeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:49:43 by miribeir          #+#    #+#             */
/*   Updated: 2022/10/12 16:13:14 by miribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	printnmb(char c)
{
	if (c > 9)
		printnmb(c / 10);
	write(1, &"0123456789"[c % 10], 1);
}

int	main(void)
{
	int	i;

	i = 1;
	while( i <= 100)
	{
		if (((i % 5) == 0) && (i % 3) == 0)
		{
			write(1, "fizzbuzz", 8);
		}
		else if ((i % 3) == 0)
		{
			write(1, "fizz", 4); 
		}
		else if ((i % 5) == 0)
		{
			write(1, "buzz", 4);
		}
		else
		{
			printnmb(i);
		}
		
	write(1, "\n", 1);
	i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miribeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:45:18 by miribeir          #+#    #+#             */
/*   Updated: 2022/09/24 18:09:21 by miribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_letter(int length, char begin, char middle, char end)
{
	int	letter_counter;

	letter_counter = 1;
	while (letter_counter <= length)
	{
		if (letter_counter == 1)
		{
			ft_putchar(begin);
		}
		else if (letter_counter == length)
		{
			ft_putchar(end);
		}
		else
		{
			ft_putchar(middle);
		}
		letter_counter++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	line_counter;

	line_counter = 1;
	if (x >= 1 && y >= 1)
	{
		while (line_counter <= y)
		{
			if (line_counter == 1)
			{
				ft_letter(x, 'A', 'B', 'C');
			}
			else if (line_counter == y)
			{
				ft_letter(x, 'A', 'B', 'C');
			}
			else
			{
				ft_letter(x, 'B', ' ', 'B');
			}
			line_counter++;
		}
	}
}

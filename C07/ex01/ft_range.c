/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miribeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:10:06 by miribeir          #+#    #+#             */
/*   Updated: 2022/10/12 21:59:39 by miribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	a;
	int	*numbers;

	range = max - min;
	a = 0;
	numbers = (int *)malloc(sizeof(int) * range);
	if (numbers == 0 || min >= max)
		return (0);
	while (a < range)
	{
		numbers[a] = min;
		a++;
		min++;
	}
	return (numbers);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	int	min;
	int	max;
	int	*a;
	int	i;
	int range;

	min = -5;
	max = 5;
	range = max - (min);
	i = 0;
	a = ft_range(min, max);
	while (i < range)
	{
		printf("%d\n", a[i]);
		i++;		
	}
	return (0);
}*/

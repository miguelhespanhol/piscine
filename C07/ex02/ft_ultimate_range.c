/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miribeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:55:41 by miribeir          #+#    #+#             */
/*   Updated: 2022/10/12 22:01:13 by miribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*rng;
	int	i;

	i = 0;
	if (min >= max)
	{
		return (0);
	}
	rng = (int *) malloc (sizeof(int) * (max - min));
	while (min < max)
	{
		rng[i] = min;
		min ++;
		i++;
	}
	*range = rng;
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	int	i;
	int	min;
	int	max;
	int	*range;

	i = 0;
	min = -5;
	max = 10;
	
	printf("%i", ft_ultimate_range(&range, min, max));
	while (i < (max - min))
	{
		printf("%i", range[i]);
		i++;
	}
	return (0);
}*/

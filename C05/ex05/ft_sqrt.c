/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miribeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:46:30 by miribeir          #+#    #+#             */
/*   Updated: 2022/10/09 17:55:35 by miribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	unsigned int	i;

	i = 0;
	if (nb <= 0)
	{
		return (0);
	}
	while ((i * i) < (unsigned int)nb)
	{
		i++;
	}
	if (i * i == (unsigned int)nb)
	{
		return (i);
	}
	else
		return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_sqrt(9));
	return (0);
}*/

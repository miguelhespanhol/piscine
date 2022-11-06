/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miribeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 20:19:08 by miribeir          #+#    #+#             */
/*   Updated: 2022/10/05 16:14:54 by miribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	res;

	sign = 1;
	res = 0;
	if (!str)
		return (0);
	while ((*str == ' ' || *str == '\f' || *str == '\n' || *str == '\r'
			|| *str == '\t' || *str == '\v') && (*str != '\0'))
		str++;
	while ((*str == '-' || *str == '+') && (*str != '\0'))
	{
		if (*str == '-')
			sign = sign * (-1);
		str++;
	}
	while ((*str != '\0') && (*str >= '0' && *str <= '9'))
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return (res * sign);
}
/*
int	main(void)
{
	char	*a = " \n\t\v\f\r-+-+--40asd31";

	printf("%d", ft_atoi(a));
	return (0);

}*/

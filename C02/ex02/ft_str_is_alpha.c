/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miribeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:02:32 by miribeir          #+#    #+#             */
/*   Updated: 2022/10/01 20:08:46 by miribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	a;

	a = 0;
	if (str[a] == '\0')
	{
		return (1);
	}
	while (str[a] != '\0')
	{
		if ((str[a] >= 'a' && str[a] <= 'z')
			|| (str[a] >= 'A' && str[a] <= 'Z'))
		{			
			a++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
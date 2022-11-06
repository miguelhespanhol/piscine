/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miribeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 19:16:41 by miribeir          #+#    #+#             */
/*   Updated: 2022/10/05 15:09:14 by miribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
		{
			j++;
		}
		if (to_find[j] == '\0')
		{
			return (str + i);
		}
		j = 0;
		i++;
	}
	return (0);
}

#include <stdio.h>

int	main(char *a, char *tf)
{
	a[] = "Astolopitecos";
	tf[] = "lop";
	
	printf("%s", strstr(*a, *tf));
	//printf("%s", ft_strstr(a, tf));
	return (0);
}

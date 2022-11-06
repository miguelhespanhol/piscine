/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miribeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 12:34:49 by miribeir          #+#    #+#             */
/*   Updated: 2022/10/12 21:57:19 by miribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		size;
	int		b;

	b = 0;
	size = ft_strlen(src);
	dup = (char *)malloc(size + 1);
	if (dup == 0)
		return (0);
	while (src[b])
	{
		dup[b] = src[b];
		b++;
	}
	dup[b] = '\0';
	return (dup);
}
/*
int	main(void)
{
	char	*str;
	char	*allocated;

	str = "Hello World with malloc()";
	printf("original  : base  : $%s$ @ %p\n", str, str);
	allocated = strdup(str);
	printf("alocated: %s \n", allocated);
}
*/

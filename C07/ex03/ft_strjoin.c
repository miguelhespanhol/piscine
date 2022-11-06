/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miribeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 20:17:35 by miribeir          #+#    #+#             */
/*   Updated: 2022/10/12 22:03:34 by miribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	ft_seplen(char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		i++;
	}
	return (i);
}

void	ft_strlen(char *str, int *p)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	*p = *p + i;
}

void	ft_strcat(char *src, char *dest, char *sep, int *b)
{
	int	y;
	int	x;
	int	z;

	y = 0;
	x = *b;
	z = 0;
	while (src[y])
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	while (sep[z])
	{
		dest[x] = sep[z];
		x++;
		z++;
	}
	*b += y + z;
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*join;
	int		b;
	int		i;
	int		p;

	i = 0;
	b = 0;
	p = 0;
	while (i < size)
	{
		ft_strlen(strs[i], &p);
		i++;
	}
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	join = malloc(sizeof(char) * p + (size * ft_seplen(sep)));
	p = 0;
	while (p < size)
	{
		ft_strcat(strs[p], join, sep, &b);
		p++;
	}
	join[b - ft_seplen(sep)] = '\0';
	return (join);
}
/*
int	main(int argc, char **argv)
{
	char	*result;

	result = ft_strjoin(argc - 2, argv + 1, argv[argc - 1]);
	printf("%s\n", result);
	free(result);
	return (0);
}
*/

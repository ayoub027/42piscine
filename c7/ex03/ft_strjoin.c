/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrifa <akrifa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 21:16:05 by akrifa            #+#    #+#             */
/*   Updated: 2023/09/27 16:27:01 by akrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	test(char *rep, int size)
{
	if (size == 0 || rep == NULL)
		return (1);
	return (0);
}

char	*ok(char *rep, char *sep, char **strs, int size)
{
	int	i;
	int	j;
	int	k;

	i = -1;
	k = -1;
	while (++i < size)
	{
		j = -1;
		while (strs[i][++j])
			rep[++k] = strs[i][j];
		j = -1;
		while (sep[++j])
			if (i < size - 1)
				rep[++k] = sep[j];
	}
	rep [k + 1] = '\0';
	return (rep);
}

int	gmaloq(char **strs, char *sep, int size)
{
	int	k;
	int	i;

	i = -1;
	k = 0;
	if (size == 0)
		return (1);
	while (++i < size)
		k += ft_strlen(strs[i]);
	k += (size - 1) * (ft_strlen(sep)) + 1;
	return (k);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*rep;

	rep = (char *)malloc(gmaloq(strs, sep, size) * sizeof(char));
	rep = ok(rep, sep, strs, size);
	return (rep);
}
/*
#include<stdio.h>

int	main(int a, char **c)
{
	char *space = "(espace)";
	char *rep;
	c++;
	rep = ft_strjoin(a - 1, c, space);
	printf("\n%s", rep);
	free (rep);
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrifa <akrifa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 19:50:29 by akrifa            #+#    #+#             */
/*   Updated: 2023/09/27 16:32:08 by akrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_diff(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (0);
	i++;
	}
	return (1);
}

int	lenrep(char *str, char *charset)
{
	int	i;
	int	lrep;

	lrep = 0;
	i = -1;
	while (str[++i])
	{
		if (ft_diff(str[i], charset) == 1)
		{
			if (i == 0)
				lrep++;
			else if (ft_diff(str[i - 1], charset) == 0)
				lrep++;
		}
	}
	return (lrep);
}

int	lenrep2(char *str, char *charset)
{
	int	rep;
	int	i;

	i = 0;
	rep = 0;
	while (str[i] && ft_diff(str[i], charset) == 0)
		i++;
	i--;
	while (str[++i] && ft_diff(str[i], charset) == 1)
		rep++;
	return (rep);
}

void	fillrep(char *str, char *charset, char **rep)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (str[i])
	{
		while (ft_diff(str[i], charset) == 0)
		i++;
		j = 0;
		while (ft_diff(str[i], charset) == 1 && str[i])
			rep[k][j++] = str[i++];
		if (ft_diff(str[i - 1], charset) == 1)
		rep[k++][j] = '\0';
		while (ft_diff(str[i], charset) == 0 && str[i])
			i++;
	}
}

char	**ft_split(char *str, char *charset)
{
	int		lrep;
	char	**rep;
	int		i;
	int		j;

	lrep = lenrep(str, charset) + 1;
	rep = (char **)malloc((lrep + 1) * sizeof(char *));
	if (rep == NULL)
		return (NULL);
	rep[lrep] = NULL;
	i = 0;
	j = 0;
	while (--lrep > 0)
	{
		while (ft_diff(str[i], charset) == 0)
			i++;
		rep[j] = (char *)malloc((lenrep2(&str[i], charset) + 2) * sizeof(char));
		if (rep[j] == NULL)
			return (NULL);
		j++;
		while (ft_diff(str[i], charset) == 1)
			i++;
	}
	fillrep(str, charset, rep);
	return (rep);
}
/*
#include<stdio.h>
int	main(int a, char **c)
{
	int		i;
	int		len;
	char	**rep;
    i = - 1;
    if (a != 3)
		return (0);
	len = lenrep( c[1], c[2]);
	printf("\n%d", len);
	rep = ft_split(c[1],c[2]);
	printf("\n%s", rep[0]);
	while (++i < len  && rep != NULL)
		printf("\n%s", rep[i]);
	if (rep == NULL)
		printf("\nNULL");
	free(rep);
}*/
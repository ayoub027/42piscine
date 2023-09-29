/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ayb2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrifa <akrifa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 21:27:36 by akrifa            #+#    #+#             */
/*   Updated: 2023/09/19 12:20:55 by akrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"mabibli.h"
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>

int	ft_test(char **tab)
{
	int	size;
	int	i;

	size = 0;
	i = 0;
	while (tab[1][i])
	{
		while (tab[1][i] && tab[1][i] >= '0' && tab[1][i] <= '9')
			i++;
		if ((tab[1][i] != ' ' && tab[1][i] != '\0') &&
			(tab[1][i] < '0' || tab[1][i] > '9'))
			return (0);
		if (tab[1][i] == ' ')
		{
			i++;
			if (tab[1][i] == ' ')
				return (0);
		}
		size++;
		i++;
	}
	if ((size + 1) % 4 != 0)
		return (0);
	return (size + 1);
}

int	*ft_atoi(char **tab, int size)
{
	int	i;
	int	s;
	int	*itab;

	itab = (int *)malloc(size * sizeof(int));
	i = 0;
	s = 0;
	while (tab[1][i])
	{
		while ((tab[1][i] >= '0' && tab[1][i] <= '9'))
		{
			itab[s] *= 10;
			itab[s] += tab[1][i] - '0';
			i++;
		}
		s++;
		i++;
	}
	return (itab);
}

int	**set_map(int size)
{
	int	i;
	int	j;
	int	**map;

	map = (int **)malloc((2 + size / 4) * sizeof(*map));
	i = 0;
	while (i < (size / 4) + 2)
	{
		j = 0;
		map[i] = malloc((2 + size / 4) * sizeof(map));
		while (j < (size / 4) + 2)
		{
			map[i][j] = 0;
			j++;
		}
		i++;
	}
	return (map);
}

int	**fill_map(int **map, int *tabi, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 1;
		while ((j < 1 + (size / 4)))
		{
			if (i < size / 4)
				map[0][j] = tabi[i];
			if ((i < size / 2) && (i >= 1 * size / 4))
				map[(size / 4) + 1][j] = tabi[i];
			if ((i < 3 * size / 4) && (i >= 2 * size / 4))
				map[j][0] = tabi[i];
			if (i >= 3 * size / 4)
				map[j][(size / 4) + 1] = tabi[i];
			i++;
			j++;
		}
	}
	return (map);
}

int	main(int argc, char **argv)
{
	int	*tabi;
	int	size;
	int	**map;

	if (argc != 2)
	{
		error();
		return (0);
	}
	size = ft_test(argv);
	if (size == 0)
	{
		error();
		return (0);
	}
	tabi = ft_atoi(argv, size);
	free(tabi);
	map = set_map(size);
	disptab(map, (size / 4) + 2);
	map = fill_map(map, tabi, size);
	disptab(map, (size / 4) + 2);
	map = fill_case(map, 1, 1, (size / 4) + 2);
	if (map == NULL)
		error();
	else
		disptab(map, (size / 4) + 2);
	free(map);
}
// ./a.out "4 2 1 5 4 2 3 3 2 4 2 3 1 2 3 2 3 4 3 2 2 5 4 1 3 2 4 3 3 1 2 2 3 2 3 5"
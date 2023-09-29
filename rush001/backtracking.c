/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrifa <akrifa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 13:00:22 by pgrataco          #+#    #+#             */
/*   Updated: 2023/09/18 22:55:24 by akrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "mabibli.h"

int	group_test(int **tab, int i, int j, int size)
{
	if (j == size -2)
	{
		if (test_row(tab, i, size) == 0)
		{
			tab[i][j] = 0;
			return (0);
		}
	}
	if (i == size -2)
	{
		if (test_column(tab, j, size) == 0)
		{
			tab[i][j] = 0;
			return (0);
		}
	}
	return (1);
}

int	is_unique(int **tab, int i, int j)
{
	int	it;

	it = 1;
	while (j - it > 0)
	{
		if (tab[i][it] == tab[i][j])
			return (0);
		it ++;
	}
	it = 1;
	while (i - it > 0)
	{
		if (tab[it][j] == tab[i][j])
			return (0);
		it ++;
	}
	return (1);
}

int	try_case(int **tab, int i, int j, int size)
{
	if (tab[i][j] == 0)
		tab[i][j] = size - 1;
	tab[i][j] = tab[i][j] -1;
	if (tab[i][j] == 0)
		return (0);
	while (is_unique(tab, i, j) == 0)
	{
		tab[i][j]--;
		if (tab[i][j] == 0)
			return (0);
	}
	return (group_test(tab, i, j, size));
}

int	**fill_case(int **tab, int i, int j, int size)
{
	if (i == size -1)// cas reussite
		return (tab);
	if (i == 0)  // tout les patterns on echoues
		return (NULL);
	if (j == size -1)
		return (fill_case(tab, i + 1, 1, size)); // cas on descend
	if (j == 0)
		return (fill_case(tab, i - 1, size - 2, size));//cas on remonte
	if (try_case(tab, i, j, size) == 0)
		return (fill_case(tab, i, j - 1, size));
	else
		return (fill_case(tab, i, j + 1, size));
}

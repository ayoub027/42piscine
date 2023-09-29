/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   updownleftright.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrifa <akrifa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 18:40:42 by pgrataco          #+#    #+#             */
/*   Updated: 2023/09/17 19:12:15 by akrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mabibli.h"

int	test_up(int **tab, int j, int size)
{
	int	viewup;
	int	it;
	int	maxactu;

	it = 1;
	viewup = 1;
	maxactu = tab[it][j];
	while (it < size -1)
	{
		it ++;
		if (tab[it][j] > maxactu)
		{
			maxactu = tab[it][j];
			viewup ++;
		}
	}
	if (viewup != tab[0][j])
		return (0);
	return (1);
}

int	test_down(int **tab, int j, int size)
{
	int	viewdown;
	int	it;
	int	maxactu;

	it = size -2;
	viewdown = 1;
	maxactu = tab[it][j];
	while (it > 0)
	{
		it --;
		if (tab[it][j] > maxactu)
		{
			maxactu = tab[it][j];
			viewdown ++;
		}
	}
	if (viewdown != tab[size -1][j])
		return (0);
	return (1);
}

int	test_left(int **tab, int i, int size)
{
	int	viewleft;
	int	it;
	int	maxactu;

	it = 1;
	viewleft = 1;
	maxactu = tab[i][1];
	while (it < size -1)
	{
		it ++;
		if (tab[i][it] > maxactu)
		{
			maxactu = tab[i][it];
			viewleft ++;
		}
	}
	if (viewleft != tab[i][0])
		return (0);
	return (1);
}

int	test_right(int **tab, int i, int size)
{
	int	viewright;
	int	it;
	int	maxactu;

	it = size - 2;
	viewright = 1;
	maxactu = tab[i][it];
	while (it > 0)
	{
		it --;
		if (tab[i][it] > maxactu)
		{
			maxactu = tab[i][it];
			viewright ++;
		}
	}
	if (viewright != tab[i][size -1])
		return (0);
	return (1);
}

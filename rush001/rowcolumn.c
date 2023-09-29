/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rowcolumn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrifa <akrifa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 19:54:33 by pgrataco          #+#    #+#             */
/*   Updated: 2023/09/18 22:41:42 by akrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"mabibli.h"
#include <unistd.h>

int	test_column(int **tab, int j, int size)
{
	if (test_up(tab, j, size) == 1 && test_down(tab, j, size) == 1)
		return (1);
	return (0);
}

int	test_row(int **tab, int i, int size)
{
	if (test_left(tab, i, size) == 1 && test_right(tab, i, size) == 1)
		return (1);
	return (0);
}

void	error(void)
{
	write(1, "Error\n", 6);
}

void	disptab(int **tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			ft_putchar(tab[i][j] + 48);
			ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

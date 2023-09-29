/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrifa <akrifa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:01:31 by akrifa            #+#    #+#             */
/*   Updated: 2023/09/11 17:40:46 by akrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	n;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab [j])
			{
			n = tab[i];
			tab[i] = tab[j];
			tab[j] = n;
			}
		j++;
		}
		i++;
	}
}
/*
#include<stdio.h>
#include<unistd.h>
int main()
{
    // Declare an array arr with the elements
    int tab[10] = {-8, 27, 15, 6, 47, 134, 69, 153, 3, 0};
    int size = 10;
    for (int i = 0; i < 10; i++)
    printf("%d ", tab[i]);

    int a;
    ft_sort_int_tab(tab, size);
    for (int i = 0; i < 10; i++)
    printf("%d ", tab[i]);

    return 0;
}*/
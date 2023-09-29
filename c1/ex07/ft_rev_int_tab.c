/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrifa <akrifa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 10:44:08 by akrifa            #+#    #+#             */
/*   Updated: 2023/09/24 12:48:48 by akrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	c;

	i = 0;
	while (i < size / 2)
	{
		c = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = c;
		i++;
	}
}

/*
#include<stdio.h>
#include<unistd.h>
int main()
{
    // Declare an array arr with the elements
    int tab[10] = {54, 27, 15, 6, 47, 134, 69, 153, 3, 51};
    int size = 10;
    for (int i = 0; i < 10; i++)
    printf("%d ", tab[i]);

    int a;
    ft_rev_int_tab(tab, size);
    for (int i = 0; i < 10; i++)
    printf("%d ", tab[i]);

    return 0;
}*/

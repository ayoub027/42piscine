/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrifa <akrifa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:33:23 by akrifa            #+#    #+#             */
/*   Updated: 2023/09/27 11:31:37 by akrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int			*tab;
	int			i;
	long int	range;

	range = max - min;
	if (max <= min)
		return (NULL);
	tab = (int *)malloc(range * sizeof(int));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < range)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
/*
#include<stdio.h>
int	main(void)
{
	int i = -1;
	int min = -2147483648; int max = 2147483647;
	int *range = ft_range(min, max);
	printf("%d\n",range);
	while (++i < max - min)
		printf("%d\n",range[i]);
}*/
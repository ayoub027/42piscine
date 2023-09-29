/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrifa <akrifa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:55:51 by akrifa            #+#    #+#             */
/*   Updated: 2023/09/27 14:52:34 by akrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int			*tab;
	int			i;
	long int	size;

	size = max - min;
	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	tab = (int *)malloc(size * sizeof(unsigned int));
	if (tab == NULL)
		return (-1);
	i = 0;
	while (i < size)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	return (size);
}

#include <stdio.h>
#include<unistd.h>

int	main(void)
{
	int	i = 0;
	int	min = -2147483648; 
	int max = 2147483647;
	int	*range;
	int	size;

	size = ft_ultimate_range(&range, min, max);
	printf("%d\n",size);
	while (i < max - min)
	{
		printf("\n%d", range[i]);
		i++;
	}	
	free(range);
}
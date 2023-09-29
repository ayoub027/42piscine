/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrifa <akrifa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 22:08:02 by akrifa            #+#    #+#             */
/*   Updated: 2023/09/25 12:57:49 by akrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index <= 2)
		return (1);
	if (index <= 4)
		return (index - 1);
	if (index == 5)
		return (index);
	if (index == 6)
		return (8);
	if (index == 7)
		return (13);
	if (index == 8)
		return (21);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
#include<stdio.h>
int	main(void)
{
	int index = 46;
	printf("%d",ft_fibonacci(index));
}*/

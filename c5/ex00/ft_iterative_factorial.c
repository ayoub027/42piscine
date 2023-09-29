/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrifa <akrifa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:19:56 by akrifa            #+#    #+#             */
/*   Updated: 2023/09/25 12:51:07 by akrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	r;

	r = 1;
	if (nb < 0)
		return (0);
	if (nb < 2)
		return (1);
	while (nb > 1)
	{
		r *= nb;
		nb--;
	}
	return (r);
}
/*
#include<stdio.h>
int	main(void)
{
	int nb = 1;
	printf("%d",ft_iterative_factorial(nb));
}*/
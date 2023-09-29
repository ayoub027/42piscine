/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrifa <akrifa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:39:03 by akrifa            #+#    #+#             */
/*   Updated: 2023/09/25 12:49:45 by akrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb > 1)
		nb *= (ft_recursive_factorial(nb - 1));
	if (nb < 2)
		return (1);
	return (nb);
}
/*
#include<stdio.h>
int	main(void)
{
	int nb = 0;
	printf("%d",ft_recursive_factorial(nb));
}*/
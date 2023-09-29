/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrifa <akrifa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:17:44 by akrifa            #+#    #+#             */
/*   Updated: 2023/09/25 12:49:21 by akrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	j;

	i = 3;
	j = (nb / 4);
	if (nb < 2)
		return (0);
	if (nb % 2 == 0 && nb != 2)
		return (0);
	if (nb % 3 == 0 && nb != 3)
		return (0);
	while (i < j)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	r;

	r = 0;
	i = 0;
	j = 0;
	if (str[i] && str[i] == '-')
	{
		j++;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		r = r * 10;
		r = r + str[i] - '0';
		i++;
	}
	if (j % 2 == 1)
		r *= -1;
	return(r);
}
#include<stdio.h>
int	main(int a, char **c)
{
	int	i;
	int param[a];

	i = 0;
	while (i++ < a -1)
	{
		param[i] = ft_atoi(c[i]);
		param[i] = ft_is_prime(param[i]);
		printf("%s : %d\n",c[i],param[i]);
	}
}
*/
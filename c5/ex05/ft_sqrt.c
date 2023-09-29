/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrifa <akrifa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 10:23:42 by akrifa            #+#    #+#             */
/*   Updated: 2023/09/25 12:40:15 by akrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	n;
	int	max;

	max = nb / 4;
	n = 3;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	if (nb == 4)
		return (2);
	if (nb == 9)
		return (3);
	while (n++ < max && n <= 46340)
		if (n * n == nb)
			return (n);
	return (0);
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
		param[i] = ft_sqrt(param[i]);
		printf("%d\n",param[i]);
	}
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrifa <akrifa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 10:42:35 by akrifa            #+#    #+#             */
/*   Updated: 2023/09/27 11:15:01 by akrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_test(char *base)
{
	int	i;
	int	j;
	int	size;

	size = 0;
	while (base[size])
		size++;
	i = 0;
	while (base[i])
	{
		j = 0;
		while (base[j])
		{
			if ((i != j && base[i] == base[j])
				|| base[j] == '+' || base[j] == '-'
				|| (base[j] >= 9 && base[j] <= 13)
				|| base[j] == ' ')
				return (0);
		j++;
		}
		i++;
	}
	return (size);
}

int	conv(char *str, char *base, int i, int size)
{
	int	j;
	int	r;

	r = 0;
	j = 0;
	while (base[j] && str[i])
	{
		if (str[i] == base[j])
		{
			r *= size;
			r += j;
			j = -1;
			i++;
		}		
		j++;
	}
	return (r);
}

int	ft_atoi_base(char *str, char *base)
{
	int	r;
	int	i;
	int	size;

	r = 0;
	size = ft_test(base);
	if (size < 2)
		return (0);
	i = 0;
	while (str[i] && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
		i++;
	while (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			r++;
		i++;
	}
	r %= 2;
	if (r == 1)
		r = -1 * (conv(str, base, i, size));
	else
		r = conv(str, base, i, size);
	return (r);
}

void	ft_itoa_base(int nbr, char *base, int i, char	*rep)
{
	int				sizeto;
	long int		s;

	sizeto = ft_test(base);
	if (nbr < 0)
	{
		s = nbr;
		s *= -1;
		rep[0] = '-';
	}
	else
		s = nbr;
	if (s > (sizeto - 1))
		ft_itoa_base(((s / sizeto)), base, i - 1, rep);
	if (i >= 0)
		rep[i] = base[(s % sizeto)];
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		sizeto;
	int		temp;
	int		plage;
	char	*rep;

	temp = ft_test(base_from);
	sizeto = ft_test(base_to);
	if (temp < 2 || sizeto < 2)
		return (NULL);
	temp = ft_atoi_base(nbr, base_from);
	plage = 1;
	while (temp != 0 && ++plage)
		temp /= sizeto;
	if (ft_atoi_base(nbr, base_from) <= 0)
		plage++;
	rep = (char *)malloc((plage) * sizeof(char));
	if (rep == NULL)
		return (NULL);
	ft_itoa_base(ft_atoi_base(nbr, base_from), base_to, plage - 2, rep);
	rep[plage] = '\0';
	if (ft_atoi_base(nbr, base_from) == 0)
		rep[0] = base_to[0];
	return (rep);
}
/*
#include <stdio.h>
int	main(int a, char **c)
{
	char	*rep;
	printf("\nnombre:%s,\nbase from:%s,\nbase to:%s", c[1],c[2],c[3]);
	if (a == 4)
		rep = ft_convert_base(c[1],c[2],c[3]);
	else
		return (0);
	printf("\nresultat :%s", rep);
	int i = 1;
	while (rep[+i])
		i++;
	printf("\n taille :%d", i);
}
printf("\nmalloc de %d", plage);*/
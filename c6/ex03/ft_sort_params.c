/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrifa <akrifa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:01:24 by akrifa            #+#    #+#             */
/*   Updated: 2023/09/22 14:17:26 by akrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] - s2[i] == 0 && s1[i]))
		i++;
	if (s1[i] - s2[i] > 0)
		return (1);
	return (0);
}

void	ft_sort_params(int a, char **c)
{
	int		i;
	int		j;
	char	*n;

	i = 1;
	while (i < a)
	{
		j = i + 1;
		while (j < a)
		{
			if (ft_strcmp(c[i], c[j]) && c[i] && c[j])
			{
				n = c[i];
				c[i] = c[j];
				c[j] = n;
			}
			j++;
		}
	i++;
	}
}

int	main(int a, char **c)
{
	int	i;
	int	j;

	ft_sort_params(a, c);
	i = 0;
	while (i++ < a -1)
	{
		j = 0;
		while (c[i][j])
			ft_putchar(c[i][j++]);
		ft_putchar('\n');
	}
}

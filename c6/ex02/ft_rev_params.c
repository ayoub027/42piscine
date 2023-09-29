/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrifa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:01:11 by akrifa            #+#    #+#             */
/*   Updated: 2023/09/21 18:03:38 by akrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int a, char **c)
{
	int	i;

	while (a-- > 1)
	{
		i = 0;
		while (c[a][i])
			ft_putchar(c[a][i++]);
		ft_putchar('\n');
	}
}
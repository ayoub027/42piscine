/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrifa <akrifa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 10:48:04 by akrifa            #+#    #+#             */
/*   Updated: 2023/09/13 13:12:06 by akrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	convhex(char n)
{
	ft_putchar('\\');
	if (n / 16 < 10)
		ft_putchar('0' + (n / 16));
	else
		ft_putchar('a' + (n / 16) - 10);
	if (n % 16 < 10)
		ft_putchar('0' + (n % 16));
	else
		ft_putchar('a' + (n % 16) - 10);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || (str[i] > 126))
			convhex(str[i]);
		else
			ft_putchar(str[i]);
		i++;
	}
}
/*#include<stdio.h>
int main(void)
{
    char str[] = "oui, jE suis-un p\ne9ti t blag=ueur";
    printf("%s", str);
    ft_putstr_non_printable(str);
}*/
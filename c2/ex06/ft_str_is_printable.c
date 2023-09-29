/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrifa <akrifa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:50:16 by akrifa            #+#    #+#             */
/*   Updated: 2023/09/13 14:07:01 by akrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	char	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || (str[i] > 126))
			return (0);
		i++;
	}
	return (1);
}
/*#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main()
{
    char str[] = " ~g";
    ft_putchar('0' + ft_str_is_printable(str));
}*/

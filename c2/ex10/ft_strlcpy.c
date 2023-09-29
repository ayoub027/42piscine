/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrifa <akrifa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 09:00:46 by akrifa            #+#    #+#             */
/*   Updated: 2023/09/20 11:54:55 by akrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i])
	{
		if (i < size - 1)
			dest[i] = src[i];
		if (i >= size -1)
			dest[i] = '\0';
		i++;
	}
	return (i);
}
/*#include<stdio.h>
#include<bsd/string.h> //-lbsd
int main()
{
    char src[10] = "aock";
    int size = 4;
    char dest[size];

printf("le tableau fait: %u", ft_strlcpy(dest,src, size)); //zu
printf("il y est ecrit : %s", dest);
}*/
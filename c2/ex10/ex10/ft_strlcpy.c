/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrifa <akrifa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 09:00:46 by akrifa            #+#    #+#             */
/*   Updated: 2023/09/28 11:06:17 by akrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (size != 0)
		dest[i] = '\0';
	while (src[i])
		i++;
	return (i);
}
#include<stdio.h>
int main()
{
    char src[] = "123456789789789";
    int size = 0;
    char dest[size];

printf("la source fait:  %d" ,  ft_strlcpy(dest,src, size));
printf(" ce au'il ya dans le tableau destination :  %s" ,  dest);
}
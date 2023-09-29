/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrifa <akrifa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 13:36:40 by akrifa            #+#    #+#             */
/*   Updated: 2023/09/19 16:56:45 by akrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = 0;
	k = 0;
	while (dest[i])
		i++;
	k = i;
	while (src[j])
	{
		if (i < size - 1)
		{
			dest[i] = src [j];
			i++;
		}
		j++;
	}
	if (i < size)
	{
		return (j + k);
	}
	dest[i] = '\0';
	return (size);
}
// #include<stdio.h>
// // #include <bsd/string.h>//-lbsd
// int main(void)
// {
//     char src1[] = "aa";
//     unsigned int size = 4;
// 	char dest1[]="mm";
// printf("la source fait:          >%d<",  ft_strlcat(dest1,src1, size));
// printf("\nce au'il ya dans le tableau destination    :>%s<" , dest1);
// }
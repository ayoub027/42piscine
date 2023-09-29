/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrifa <akrifa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:44:52 by akrifa            #+#    #+#             */
/*   Updated: 2023/09/13 14:18:03 by akrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	j;

	j = 0;
	while (src[j] && j < n)
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
/*
#include<stdio.h>
#include<unistd.h>
int main()
{

	int	n = 5;
	char	src[] = "inception.";
	char	dest[n];
	char	*test;
  //  for (int i = 0; i < n; i++)
//    printf("%c ", dest[i]);
    test = ft_strncpy(dest, src, n);
    for (int i = 0; i < n; i++)
    printf("%c ", dest[i]);

    return 0;
}
*/

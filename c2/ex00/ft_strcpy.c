/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrifa <akrifa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 08:19:03 by akrifa            #+#    #+#             */
/*   Updated: 2023/09/13 14:13:33 by akrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strcpy(char *dest, char *src)
{
	char	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include<stdio.h>
#include<unistd.h>
int main()
{

	char src[10] = "Inception.";
	char dest[10];
	char *test;
	for (int i = 0; i < 10; i++)
	printf("%c ", dest[i]);
	test = strcpy(dest, src);
	for (int i = 0; i < 10; i++)
	printf("%c ", dest[i]);
    return 0;
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrifa <akrifa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:41:46 by akrifa            #+#    #+#             */
/*   Updated: 2023/09/19 20:44:01 by akrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}
//  #include<unistd.h>
//  #include<stdio.h>
//  #include<string.h>
//  int main(void)
//  {
// 	char dest1[] = "a";
// 	char dest2[] = "a";
// 	char src[] = "aaaaaaaaa";
// 	// dest2[0] = "a";
// 	// dest1 = "ay";
// 	// src = "krifaa";
// 	ft_strcat(dest1, src);
// 	printf("%s",dest1);
// 	strcat(dest2,src);
// 	printf("\n%s",dest2);
//  }

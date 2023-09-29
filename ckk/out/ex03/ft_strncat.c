/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrifa <akrifa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:33:49 by akrifa            #+#    #+#             */
/*   Updated: 2023/09/19 12:26:31 by akrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < nb)
	{
		dest[i] = src [j];
		i++;
		j++;
	}
	return (dest);
}
//  #include<unistd.h>
//  #include<stdio.h>
//  #include<string.h>
//  
//  int main(void)
//  {
// 	char dest1[] = "a";
// 	char dest2[] = "b";
// 	char src[] = "k";
// 	unsigned int nb = 1;
// 
// 	
// 	
// 	ft_strncat(dest1, src,nb);
// 	printf("%s",dest1);
// 	strncat(dest2,src,nb);
// 	printf("\n%s",dest2);
//  }

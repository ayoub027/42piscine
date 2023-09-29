/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrifa <akrifa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:28:56 by akrifa            #+#    #+#             */
/*   Updated: 2023/09/19 19:46:02 by akrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i] == to_find[j] && str[i])
		{
			j++;
			i++;
			if ((to_find[j]) == '\0')
				return (&str[i - j]);
		}
		i++;
	}
	return (NULL);
}

//  #include<unistd.h>
//  #include<stdio.h>
//  #include<string.h>
//  int main(void)
//  {
// 	char *str = "ayoub";
// 	char *to_find= "ayoub";
// 	printf("ma fonction:>%s<",ft_strstr(str,to_find));
// 	printf("\nla vraie:   >%s<",strstr(str,to_find));
//  }
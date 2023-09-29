/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ayb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrifa <akrifa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 19:50:29 by akrifa            #+#    #+#             */
/*   Updated: 2023/09/26 18:34:38 by akrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (0);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j])
		{
			j++;
			if (to_find[j] == '\0')
				return (i + j);
		}
		i++;
	}
	return (0);
}

int	lenrep(char *str, char *charset)
{
	int	i;
	int lrep = 0;
	int	len = 0;

	i = 0;
	while (charset[len])
		len++;
	printf("\nlen:%d", len);
	while (ft_strstr(&str[i], charset))
	{
		if (ft_strstr(&str[i], charset) != len)
			lrep++;
		// printf("\nnspace:%d,\nle test rend ;%d\n,", lrep,ft_strstr(&str[i], charset));
		i += ft_strstr(&str[i], charset);
	}
	// printf("\nlast space:%d", i- 1);
	if (str[i])
		lrep++;
	return (lrep);		
}

// char	**ft_split(char *str, char *charset)
// {
// 	int	lenrep;
// 	lrep = lenrep(str, charset);
// }

int	main(int a, char **c)
{
	int	i;
	int rep;
    i = -1;
    if (a != 3)
		return (0);
	rep = lenrep( c[1], c[2]);
	// while (*rep[++i])
	// 	printf("\n%s", *rep[i]);
	printf("\n%d", rep);
}
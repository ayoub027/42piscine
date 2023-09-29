/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrifa <akrifa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:39:30 by akrifa            #+#    #+#             */
/*   Updated: 2023/09/13 15:48:25 by akrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strlowcase(char *str)
{
	char	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_strlowcase(str);
	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	i++;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if ((str[i - 1] < 'a' || str[i - 1] > 'z') && (str[i - 1] < 'A'
					|| str[i - 1] > 'Z') && (str[i - 1] < 0 || str[i - 1] > 9))
			{
				str[i] -= 32;
				printf("1");
			}
			else
			{
				printf("0");
			}
		}
		else
		{
			printf("0");
		}
		i++;
	}
	return (str);
}

#include <stdio.h>
int main(void)
{
	char str[] = "oui, jE suis-un pe9ti t blag=ueur";
		// for (int i = 0; i < 33; i++)
	printf("%s \n", str);
	printf("%s ", ft_strcapitalize(str));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrifa <akrifa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:25:36 by akrifa            #+#    #+#             */
/*   Updated: 2023/09/19 11:32:18 by akrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] - s2[i] == 0 && s1[i] != '\0' ) && s2[i] != '\0')
		i++;
	return ((int)(s1[i] - s2[i]));
}
// #include<stdio.h>
// #include<unistd.h>
// int main(void)
// {
// 	char s1[7]="ayouba2";
// 	char s2[8]="aybuba22";
// 	printf("%d", ft_strcmp(s1,s2));
// }
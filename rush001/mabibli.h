/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mabibli.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrifa <akrifa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 13:19:07 by pgrataco          #+#    #+#             */
/*   Updated: 2023/09/17 21:16:49 by pgrataco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef MABIBLI_H
# define MABIBLI_H

void	error(void);
void	disptab(int **tab, int size);
void	ft_putchar(char c);
int		test_up(int *tab[], int j, int size);
int		test_down(int *tab[], int j, int size);
int		test_left(int *tab[], int i, int size);
int		test_right(int *tab[], int i, int size);
int		test_column(int *tab[], int j, int size);
int		test_row(int *tab[], int i, int size);
int		group_test(int *tab[], int i, int j, int size);
int		try_case(int *tab[], int i, int j, int size);
int		**fill_case(int **tab, int i, int j, int size);

#endif

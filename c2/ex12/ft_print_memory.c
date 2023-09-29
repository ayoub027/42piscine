/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrifa <akrifa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 11:19:44 by akrifa            #+#    #+#             */
/*   Updated: 2023/09/28 20:24:27 by akrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<unistd.h>






void	ft_putchar(char c)
{
	write(1, &c, 1);
}



void	convhex(unsigned char n)
{
	ft_putchar('\\');
	if (n / 16 < 10)
		ft_putchar('0' + (n / 16));
	else
		ft_putchar('a' + (n / 16) - 10);
	if (n % 16 < 10)
		ft_putchar('0' + (n % 16));
	else
		ft_putchar('a' + (n % 16) - 10);
}

void	ftputstr16(char *b, int max)
{
	int i = 0;
	while (i + max < 16 && b[i])
		write(1, &b[i++], 1);
	write(1, "\n", 1);
}

void	ft_putnbr_hex(long int nbr, char *base)
{
	int	size;

	if (nbr > (15) || nbr < -(15))
		ft_putnbr_hex((nbr / 16), base);
	ft_putchar(base[nbr % 16]);
}
void	filler(long int nbr, int plage, int type, char filler)
{
	long int nb;
	int i;
	
	i = -1;
	nb = nbr;
	while ( nb != 0)
	{
			nb /= 16;
			i++;
	}
	while (++i < plage)
	{
		write(1, &filler,1);
	}
	if (type == 1)
	{
		ft_putnbr_hex(nbr, "0123456789abcdef");
		write(1, ": ", 2);
	}
	else 
	{
		ft_putnbr_hex(nbr,"0123456789abcdef");
		write(1," ",1);
	}
}

void *ft_print_memory(void *addr, unsigned int size)
{
	int	i;
	long int a;
	char *b;
	int	max;
	
	a = (long int)addr;
	b = (char *)a;
	if (size == 0)
		return (0);
	i = 0;
	while (i < size)
		{
			max = 0;
			filler(a + i, 16, 1, '0');
			filler(b[i++], 2, 0, '0');
			while ((i + 1) % 16 != 1 || i == 0)
			{
				if (i < size)
					filler(b[i++], 2, 0, '0');
				if (i < size)
					filler(b[i++], 2, 0, '0');
				else
				{
					max += write(1, " ", 1) + 1;
					i++;
				}
			}
			ftputstr16(&b[i + max - 16], max);
			i += 16;		
		}
	return (addr);
}

int	main(int a, char **c)
{
	int	size = 0;
	while (a - 1 > 0)
	{
		int n = '\n';
		write(1, &n, 1);
		while (c[a - 1][size])
			size++;
		char *adr = &c[a - 1][0];
		void *addr = (void *)adr;		
		ft_print_memory(addr , size);
		size = 0;
		a--;
	}
	return (0);
}
















/*


int	ft_atoi(char *str)
{
	int	i;
	int	r;

	i = 0;
	while (str[i])
	{
		r = r * 16 + str[i] - '0';
		i++;
	}
	return (r);
}


void	ft_itoa_base(int nbr, char *base, int i, char	*rep)
{
	int				sizeto;
	long int		s;

	sizeto = ft_test(base);
	if (nbr < 0)
	{
		s = nbr;
		s *= -1;
		rep[0] = '-';
	}
	else
		s = nbr;
	if (s > (sizeto - 1))
		ft_itoa_base(((s / sizeto)), base, i - 1, rep);
	if (i >= 0)
		rep[i] = base[(s % sizeto)];
}*/
#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_hex(long int nbr, int i)
{
	int	size;
    char    *base;

    base = "0123456789abcdef";
	size = 16;
	if (nbr > (size - 1) || nbr < -(size - 1))
		i = ft_putnbr_hex((nbr / size), i + 1);
	ft_putchar(base[nbr % size]);
    if (i < 15)
        return (i + 1);
    
}
int main(void)
{
    int i;
    ft_ft_putnbr_hex(0);
}
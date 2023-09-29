#include <stdio.h>
int	main(void)
{
	char	str[10000];

	unsigned long addr = (unsigned long) str;
	printf("%d\n", addr >> 10);
	return (0);
}

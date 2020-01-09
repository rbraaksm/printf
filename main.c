#include <stdio.h>
#include "printf.h"

int main(void)
{
	int	mine;
	int	real;
	char	x;
	char	*str;

	x = 10;
	mine = 0;
	real = 0;
	str = "%-010c";
	mine = ft_printf(str, x);
	printf("\n");
	real = printf(str, x);
	printf("\n");
	printf("Mine = %d\n", mine);
	printf("Real = %d\n", real);
	return (0);
}

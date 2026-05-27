#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	ft_printf("Hello\n");
	ft_printf("%c\n", 'A');
	ft_printf("%s\n", "Hello");
	ft_printf("%d\n", 42);
	ft_printf("%d\n", -42);
	ft_printf("%i\n", 42);
	ft_printf("%u\n", 4294967295U);
	ft_printf("%x\n", 255);
	ft_printf("%X\n", 255);
	ft_printf("%%\n");
	
	int x = 42;
	printf("%p\n", &x);
	ft_printf("%p\n", &x);

	ft_printf("%s\n", NULL);
	ft_printf("%p\n", NULL);
	ft_printf("%d\n", -2147483648);
	ft_printf("%d\n", 2147483647);
	ft_printf("%u\n", 0);
	ft_printf("%x\n", 0);
	ft_printf("%s\n", "");
	ft_printf("%d %d %d\n", 1, 2, 3);

	// bonus
	// printf("%-10s\n", "hi");
	// printf("%05d", 42);
}
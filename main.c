#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

int	main(void)
{
	int		x;
	int		ret1;
	int		ret2;

	x = 42;

	printf("=== CHAR ===\n");
	printf("%c\n", 'A');
	ft_printf("%c\n", 'A');

	printf("\n=== STRING ===\n");
	printf("%s\n", "hello");
	ft_printf("%s\n", "hello");

	printf("\n=== NUMBER ===\n");
	printf("%d %i\n", -42, 42);
	ft_printf("%d %i\n", -42, 42);

	printf("%d\n", INT_MIN);
	ft_printf("%d\n", INT_MIN);

	printf("%d\n", INT_MAX);
	ft_printf("%d\n", INT_MAX);

	printf("\n=== UNSIGNED ===\n");
	printf("%u\n", 0);
	ft_printf("%u\n", 0);

	printf("%u\n", UINT_MAX);
	ft_printf("%u\n", UINT_MAX);

	printf("\n=== HEX ===\n");
	printf("%x %X\n", 255, 255);
	ft_printf("%x %X\n", 255, 255);

	printf("%x %X\n", 0, 0);
	ft_printf("%x %X\n", 0, 0);

	printf("\n=== POINTER ===\n");
	printf("%p\n", (void *)&x);
	ft_printf("%p\n", (void *)&x);

	printf("%p\n", (void *)NULL);
	ft_printf("%p\n", (void *)NULL);

	printf("\n=== NULL STRING ===\n");
	ft_printf("%s\n", (char *)NULL);

	printf("\n=== PERCENT ===\n");
	printf("100%%\n");
	ft_printf("100%%\n");

	printf("\n=== RETURN VALUE ===\n");
	ret1 = printf("%d %u %x %X %c %s %%\n",
			-42, 42, 255, 255, 'A', "hello");
	ret2 = ft_printf("%d %u %x %X %c %s %%\n",
			-42, 42, 255, 255, 'A', "hello");
	printf("printf returned: %d\n", ret1);
	printf("ft_printf returned: %d\n", ret2);

	return (0);
}

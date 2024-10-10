#include "printf/libftprintf.h"

int main(void)
{
	// int	resft;
	// int	resor;

	ft_printf("my format%%   %%");

	// printf("\n1 - START: NULL\n");
	// resft = ft_printf(NULL);
	// resor = printf(NULL);
	// printf("ft_res: %7d | %-7d :or_res %s\n", resft, resor, (resft == resor) ? "PASS" : "FAIL");
	// printf("1 -  END : NULL\n");

	// printf("\n2 - START: %%\n");
	// resft = ft_printf("%%\n");
	// resor = printf("%%\n");
	// printf("ft_res: %7d | %-7d :or_res %s\n", resft, resor, (resft == resor) ? "PASS" : "FAIL");
	// printf("2 -  END : %%\n");

	// printf("\n3 - START: some text than%%\n");
	// resft = ft_printf("some text than%%\n");
	// resor = printf("some text than%%\n");
	// printf("ft_res: %7d | %-7d :or_res %s\n", resft, resor, (resft == resor) ? "PASS" : "FAIL");
	// printf("3 -  END : some text than%%\n");

	// printf("\n4 - START: some text than a char\n");
	// resft = ft_printf("text than %c\n\n", 'C');
	// resor = printf("text than %c\n", 'C');
	// printf("ft_res: %7d | %-7d :or_res %s\n", resft, resor, (resft == resor) ? "PASS" : "FAIL");
	// printf("4 -  END : some text than a char\n");

	return 0;
}

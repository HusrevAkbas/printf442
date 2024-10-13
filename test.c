#include "printf/ft_printf.h"
#include "limits.h"

int main(void)
{
	int	resft;
	int	resor;
	unsigned long ul = 165498755;
	// char	*string = "char pointer";
	// resft = ft_printf("some text and a char: %c\n", 67);
	// printf("restft: %i\n", resft);
	// resft = ft_printf("some text and a number: %d\n", -6732424);
	// printf("restft: %i\n", resft);
	// resft = ft_printf("some text and a string: %s\n", "text as a parameter");
	// printf("restft: %i\n", resft);
	// resft = ft_printf("some text and a poirter as long: %p\n", "text as a parameter");
	// printf("restft: %i\n", resft);
	// resft = ft_printf("some text and a nothing: %a\n", string);
	// printf("restft: %i\n", resft);
	// resft = ft_printf("not identifiers format 0%a34%H78%%\n", string);
	// printf("restft: %i\n", resft);
	// resft = ft_printf("one identifier between not identifiers 034%sH78%%\n", "0000");
	// printf("resft: %i\n", resft);
	// resor = printf("one identifier between not identifiers 034%sH78%%\n", "0000");
	// printf("resor: %i\n", resor);
	// resft = ft_printf("pointer identifier %p\n", string);
	// printf("resft: %i\n", resft);
	// resor = printf("pointer identifier %p\n", string);
	// printf("resor: %i\n", resor);

	// resft = ft_printf("unsigned int identifier %u", ul);
	// printf(" | resft: %i\n", resft);
	// resor = printf("unsigned int %u", ul);
	// printf(" | resor: %i\n", resor);

	// resft = ft_printf("unsigned int %u", -10000);
	// printf(" | resft: %i\n", resft);
	// resor = printf("unsigned int %u", -10000);
	// printf(" | resor: %i\n", resor);

	// resft = ft_printf("pointer identifier %x", ul);
	// printf(" | resft: %i\n", resft);
	// resor = printf("pointer identifier %x", ul);
	// printf(" | resor: %i\n", resor);

	// resft = ft_printf("pointer identifier %X", ul);
	// printf("resft: %i\n", resft);
	// resor = printf("pointer identifier %X", ul);
	// printf("resor: %i\n", resor);

	// resft = ft_printf("pointer identifier %x", -1569);
	// printf("resft: %i\n", resft);
	// resor = printf("pointer identifier %x", -1569);
	// printf("resor: %i\n", resor);

	// resft = ft_printf("%c %c %c ", '0', 0, '1');
	// printf("resft: %i\n", resft);
	// resor = printf("%c %c %c ", '0', 0, '1');
	// printf("resor: %i\n", resor);

	// resft = ft_printf("Null %s Null ", NULL);
	// printf("resft: %i\n", resft);
	// resor = printf("Null %s Null ", NULL);
	// printf("resor: %i\n", resor);
	
	// resft = ft_printf("Null %p Null ", NULL);
	// printf("resft: %i\n", resft);
	// resor = printf("Null %p Null ", NULL);
	// printf("resor: %i\n", resor);
	
	// resft = ft_printf("Null %c Null ", 0);
	// printf("resft: %i\n", resft);
	// resor = printf("Null %c Null ", 0);
	// printf("resor: %i\n", resor);
	
	// resft = ft_printf("Null %cccc Null ", 77);
	// printf("resft: %i\n", resft);
	// resor = printf("Null %cccc Null ", 77);
	// printf("resor: %i\n", resor);

	// resft = ft_printf("zero %ddd zero ", 0);
	// printf("resft: %i\n", resft);
	// resor = printf("zero %ddd zero ", 0);
	// printf("resor: %i\n", resor);
	
	// resft = ft_printf("int %p ", 0);
	// printf("resft: %i\n", resft);
	// resor = printf("int %p ", 0);
	// printf("resor: %i\n", resor);

	resft = ft_printf("int %x ", LONG_MAX);
	printf("resft: %i\n", resft);
	resor = printf("int %x ", LONG_MAX);
	printf("resor: %i\n", resor);

	resft = ft_printf("int %x ", LONG_MIN);
	printf("resft: %i\n", resft);
	resor = printf("int %x ", LONG_MIN);
	printf("resor: %i\n", resor);

	resft = ft_printf("int %x ", LONG_MAX * 2L +1L);
	printf("resft: %i\n", resft);
	resor = printf("int %x ", LONG_MAX * 2L +1L);
	printf("resor: %i\n", resor);
	
// char *str = ft_itobase(LLONG_MIN, get_const("decimal"));
// printf("%s\n", str);
// free(str);
// printf("%lu", LLONG_MIN);

	// resft = ft_printf("int %p ", 18);
	// printf("resft: %i\n", resft);
	// resor = printf("int %p ", 18);
	// printf("resor: %i\n", resor);

	return 0;
}

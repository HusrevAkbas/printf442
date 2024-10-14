#include "printf/ft_printf.h"
#include "limits.h"

void	test_main()
{
	int	resft;
	int	resor;
	char	*string = "char pointer";

	resft = ft_printf("CHAR %c a char: %c ", 67, 68);
	printf(" | restft: %i\n", resft);
	resor = printf("CHAR %c a char: %c ", 67, 68);
	printf(" | restor: %i\n", resor);

	resft = ft_printf("CHAR null %c a char: %c ", 0, NULL);
	printf(" | restft: %i\n", resft);
	resor = printf("CHAR null %c a char: %c ", 0, NULL);
	printf(" | restor: %i\n", resor);

	resft = ft_printf("INT NULL : %d", NULL);
	printf(" | resft: %i\n", resft);
	resor = printf("INT NULL : %d", NULL);
	printf(" | resor: %i\n", resor);

	resft = ft_printf("INT ZERO int : %d", 0);
	printf(" | resft: %i\n", resft);
	resor = printf("INT ZERO int : %d", 0);
	printf(" | resor: %i\n", resor);

	resft = ft_printf("INT int : %i", -6732424);
	printf(" | resft: %i\n", resft);
	resor = printf("INT int : %i", -6732424);
	printf(" | resor: %i\n", resor);

	resft = ft_printf("%d INT at beginning", -6732424);
	printf(" | resft: %i\n", resft);
	resor = printf("%d INT at beginning", -6732424);
	printf(" | resor: %i\n", resor);

	resft = ft_printf("%i INT at beginning with zeros", 900000);
	printf(" | resft: %i\n", resft);
	resor = printf("%i INT at beginning with zeros", 900000);
	printf(" | resor: %i\n", resor);

	resft = ft_printf("int %d", INT_MAX);
	printf(" | resft: %i\n", resft);
	resor = printf("int %d", INT_MAX);
	printf(" | resor: %i\n", resor);

	resft = ft_printf("int %d", INT_MIN);
	printf(" | resft: %i\n", resft);
	resor = printf("int %d", INT_MIN);
	printf(" | resor: %i\n", resor);

	resft = ft_printf("STRING: %s", "text as a parameter");
	printf(" | restft: %i\n", resft);
	resor = printf("STRING: %s", "text as a parameter");
	printf(" | restor: %i\n", resor);

	resft = ft_printf("STRING Null %s Null ", NULL);
	printf(" | resft: %i\n", resft);
	resor = printf("STRING Null %s Null ", NULL);
	printf(" | resor: %i\n", resor);

	resft = ft_printf("NOT: %k%k%k%k");
	printf(" | resft: %i\n", resft);
	resor = printf("NOT: %k%k%k%k");
	printf(" | resor: %i\n", resor);

	resft = ft_printf("NOT identifiers 0 %m 34%k78%%");
	printf(" | restft: %i\n", resft);
	resor = printf("NOT identifiers 0 %m 34%k78%%");
	printf(" | resor: %i\n", resor);

	resft = ft_printf("one identifier between not identifiers %k 034 %s H78%%", "0000");
	printf(" | resft: %i\n", resft);
	resor = printf("one identifier between not identifiers %k 034 %s H78%%", "0000");
	printf(" | resor: %i\n", resor);

	resft = ft_printf("POINTER identifier %p", string);
	printf(" | resft: %i\n", resft);
	resor = printf("POINTER identifier %p", string);
	printf(" | resor: %i\n", resor);

	resft = ft_printf("POINTER NULL identifier %p", NULL);
	printf(" | resft: %i\n", resft);
	resor = printf("POINTER NULL identifier %p", NULL);
	printf(" | resor: %i\n", resor);

	resft = ft_printf("POINTER int parameter %x", -1569);
	printf(" | resft: %i\n", resft);
	resor = printf("POINTER int parameter %x", -1569);
	printf(" | resor: %i\n", resor);

	resft = ft_printf("POINTER int %p ", 100);
	printf(" | resft: %i\n", resft);
	resor = printf("POINTER int %p ", 100);
	printf(" | resor: %i\n", resor);

	resft = ft_printf("UNSIGNED int %u", 1234567988);
	printf(" | resft: %i\n", resft);
	resor = printf("UNSIGNED int %u", 1234567988);
	printf(" | resor: %i\n", resor);

	resft = ft_printf("UNSIGNED int max %u", ULONG_MAX);
	printf(" | resft: %i\n", resft);
	resor = printf("UNSIGNED int max %u", ULONG_MAX);
	printf(" | resor: %i\n", resor);

	resft = ft_printf("UNSIGNED int %u", 0);
	printf(" | resft: %i\n", resft);
	resor = printf("UNSIGNED int %u", 0);
	printf(" | resor: %i\n", resor);

	resft = ft_printf("UNSIGNED int %u", 1000000);
	printf(" | resft: %i\n", resft);
	resor = printf("UNSIGNED int %u", 1000000);
	printf(" | resor: %i\n", resor);

	resft = ft_printf("he x long max %x ", LONG_MAX);
	printf(" | resft: %i\n", resft);
	resor = printf("he x long max %x ", LONG_MAX);
	printf(" | resor: %i\n", resor);

	resft = ft_printf("he x long min %x ", LONG_MIN);
	printf(" | resft: %i\n", resft);
	resor = printf("he x long min %x ", LONG_MIN);
	printf(" | resor: %i\n", resor);

	resft = ft_printf("he x ulong max %x ", ULONG_MAX);
	printf(" | resft: %i\n", resft);
	resor = printf("he x ulong max %x ", ULONG_MAX);
	printf(" | resor: %i\n", resor);

	resft = ft_printf("HE X long max %X ", LONG_MAX);
	printf(" | resft: %i\n", resft);
	resor = printf("HE X long max %X ", LONG_MAX);
	printf(" | resor: %i\n", resor);

	resft = ft_printf("HE X long min %X ", LONG_MIN);
	printf(" | resft: %i\n", resft);
	resor = printf("HE X long min %X ", LONG_MIN);
	printf(" | resor: %i\n", resor);

	resft = ft_printf("HE X int %X ", 123456789);
	printf(" | resft: %i\n", resft);
	resor = printf("HE X int %X ", 123456789);
	printf(" | resor: %i\n", resor);
}
void	test_bonus()
{
	int resft;
	int resor;
	// char *string = "char pointer";

	resft = ft_printf("CHAR %c a char: %c ", 67, 68);
	printf(" | restft: %i\n", resft);
	resor = printf("CHAR %c a char: %c ", 67, 68);
	printf(" | restor: %i\n", resor);
}
int main(void)
{
	//test_main();
	test_bonus();
	return 0;
}

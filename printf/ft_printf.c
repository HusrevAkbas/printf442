/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huakbas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 18:25:49 by huakbas           #+#    #+#             */
/*   Updated: 2024/10/05 18:25:51 by huakbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/*
	1) Each conversion specification is introduced by the character %, and ends
	with a conversion specifier.
	2) In between there may be (in this order) 
		1- zero or more flags,				-0. #+
		2- an optional minimum field width,	any positiv number
		3- an optional precision and 		THE '.' FLAG IN 1. RULE
		4- an optional length modifier.		NOT INCLUDED
		5- convertion identifiers			cspdiuxX%
*/

char	*get_flags()
{
	return ("-0. #+");
}
char	*set_flags(char *checkpoint)
{
	(void) checkpoint;
	//while (ft_strchr())
	return NULL;
}

void	print_some(const char *format, char *checkpoint)
{
	char *sub;
	sub = ft_substr(format, 0, checkpoint - format);
	ft_putstr_fd(sub, 1);
	free(sub);
}

int	ft_printf(const char *format, ...)
{
	//va_list	args;
	int		res;
	char	*flags;
	char	*checkpoint;

	while (*format)
	{
		
		if (!format)
			return (-1);
		res = 0;
		checkpoint = ft_strchr(format, '%');
		if (checkpoint[1] == '%')
		{
			print_some(format, &checkpoint[1]);
			format = &checkpoint[2];
		}
		else
		{
			flags = set_flags(checkpoint);
		}
		// printf("char at checkpoint: %c\n", checkpoint != NULL ? *checkpoint : 'N');
		// printf("checkpoint - format: %ld\n", checkpoint - format);

		
		//check % char
		//print until %
		//check flags
		//check min field
		//check precision
		//check length modifier
		//check conversion specifier
		//convert
		//write
	}
	return (res);
}

// int main(void)
// {
// 	char **words = ft_split("keiua meiak eiau", ' ');
// 	int	i = 0;
// 	while (words[i])
// 	{
// 		printf("%s\n", (char *) words[i]);
// 	}
	
// 	return 0;
// }
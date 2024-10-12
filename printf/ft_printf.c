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

#include "ft_printf.h"

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

char	*set_flags(char **checkpoint)
{
	char	*flags;
	int		i;

	flags = ft_calloc(50, 1);
	i = 0;
	while ( **checkpoint && ft_strchr(get_const("con_id"), **checkpoint))
	{
		flags[i] = **checkpoint;
		i++;
		*checkpoint += 1;
	}
	return flags;
}

void	print_some(const char *format, char *checkpoint, int *res)
{
	char *sub;

	sub = ft_substr(format, 0, checkpoint - format);
	ft_putstr_fd(sub, 1);
	*res += ft_strlen(sub);
	free(sub);
}

int	check_str_has_char(char *flags, const char *con_spec)
{
	int	i;

	i = 0;
	while (flags[i])
	{
		if (ft_strchr(con_spec, flags[i]))
			return (1);
		i++;
	}
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		res;
	char	*flags;
	char	*checkpoint;
	char	*substr;

	if (!format)
		return (-1);
	res = 0;
	va_start(args, format);
	while (*format)
	{
		//check %
		checkpoint = ft_strchr(format, '%');

		if (!checkpoint)
		{
			ft_putstr_fd((char *) format, 1);
			return res + ft_strlen(format);
		}
		else 
		{
		//print until next %
			substr = ft_substr(format, 0, checkpoint - format);
			ft_putstr_fd(substr, 1);
			res += ft_strlen(substr);
			free(substr);
			checkpoint++;
		}
		if (*checkpoint == '%')
		{
			ft_putstr_fd("%", 1);
			res++;
			checkpoint++;
			format = checkpoint;
		}
		else
		{
			format = checkpoint;
			// check flags
			flags = set_flags(&checkpoint);
//printf("const: %s\n", flags);
			if (check_str_has_char(flags, get_const("con_id")))
			{
				ft_handle_convertion_identifiers(flags, args, &res);
				format = checkpoint;
			}
			else
			{
				ft_putstr_fd("%", 1);
				res++;
			}
			free(flags);
		}
		// printf("char at checkpoint: %c\n", checkpoint != NULL ? *checkpoint : 'N');
		// printf("checkpoint - format: %ld\n", checkpoint - format);
	}
	va_end(args);
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
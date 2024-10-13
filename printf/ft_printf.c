/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husrevakbas <husrevakbas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 18:25:49 by huakbas           #+#    #+#             */
/*   Updated: 2024/10/13 23:10:50 by husrevakbas      ###   ########.fr       */
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
	if (**checkpoint && ft_strchr(get_const("con_id"), **checkpoint))
	{
		flags[i] = **checkpoint;
		i++;
		*checkpoint += 1;
	}
	return (flags);
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

void	print_substr(char *format, char **checkpoint, int *res)
{
	char	*str;

	str = ft_substr(format, 0, *checkpoint - format);
	*checkpoint += 1;
	*res += ft_print_count(str);
	free(str);
}

void	check_flags_handle(char **checkpoint, va_list args, int *res)
{
	char	*flags;

	flags = set_flags(checkpoint);
	if (check_str_has_char(flags, get_const("con_id")))
		ft_handle_convertion(flags, args, res);
	else
		res += ft_print_count("%");
	free(flags);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		res;
	char	*checkpoint;

	if (!format)
		return (-1);
	res = 0;
	va_start(args, format);
	while (*format)
	{
		checkpoint = ft_strchr(format, '%');
		if (!checkpoint)
			return (res += ft_print_count((char *) format));
		print_substr((char *) format, &checkpoint, &res);
		if (checkpoint[0] == '%')
		{
			res += ft_print_count("%");
			checkpoint += 1;
		}
		else
			check_flags_handle(&checkpoint, args, &res);
		format = checkpoint;
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
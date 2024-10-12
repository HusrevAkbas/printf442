/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_conversion_identifiers.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huakbas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:34:47 by huakbas           #+#    #+#             */
/*   Updated: 2024/10/10 14:34:51 by huakbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_handle_convertion_identifiers(char *flags, va_list args, int *res)
{
	char	*str_to_print;
	char	handle_char[2];

	// WILL BE ADDED IN CONVERTION HANDLERS
	// check min field
	// check precision
	// check length modifier
	// check conversion specifier
	// convert
	// write
	// DONT FORGET TO COUNT PRINTED CHARS
	if (ft_strchr(flags, 'c'))
	{
		handle_char[0] = va_arg(args, int);
		if (handle_char[0] == 0)
		{
			write(1, "\0", 1);
			*res += 1;
		}
		else
		{
			handle_char[1] = 0;
			ft_putstr_fd(handle_char, 1);
			*res += ft_strlen(handle_char);
		}
	}
	if (ft_strchr(flags, 'd') || ft_strchr(flags, 'i'))
	{
		// apply flags and print cspdiuxX%
		str_to_print = ft_itoa(va_arg(args, int));
		if (str_to_print)
		{
			ft_putstr_fd(str_to_print, 1);
			*res += ft_strlen(str_to_print);
		}
		free(str_to_print);
	}
	if (ft_strchr(flags, 's'))
	{
		str_to_print = va_arg(args, char *);
		if (str_to_print)
		{
			ft_putstr_fd(str_to_print, 1);
			*res += ft_strlen(str_to_print);
		}
		else
		{
			ft_putstr_fd("(null)", 1);
			*res += 6;
		}
	}
	if (ft_strchr(flags, 'p'))
	{
		//WILL BE CONVERTED
		long i = (long) va_arg(args, void *);
		str_to_print = ft_itobase(i, get_const("hex_low"));
		ft_putstr_fd("0x", 1);
		ft_putstr_fd(str_to_print, 1);
		*res += ft_strlen(str_to_print) + 2;
		free(str_to_print);
	}
	if (ft_strchr(flags, 'u'))
	{
		//WILL BE CONVERTED
		str_to_print = ft_itoa((unsigned int) va_arg(args, unsigned int));
		ft_putstr_fd(str_to_print, 1);
		*res += ft_strlen(str_to_print);
		free(str_to_print);
	}
	if (ft_strchr(flags, 'x'))
	{
		//WILL BE CONVERTED
		str_to_print = ft_itobase((long) va_arg(args, long), get_const("hex_low"));
		ft_putstr_fd(str_to_print, 1);
		*res += ft_strlen(str_to_print);
		free(str_to_print);
	}
	if (ft_strchr(flags, 'X'))
	{
		//WILL BE CONVERTED
		str_to_print = ft_itobase((long) va_arg(args, long), get_const("hex_up"));
		ft_putstr_fd(str_to_print, 1);
		*res += ft_strlen(str_to_print);
		free(str_to_print);
	}
}

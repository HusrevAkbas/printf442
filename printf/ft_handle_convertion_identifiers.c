/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_convertion_identifiers.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husrevakbas <husrevakbas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:34:47 by huakbas           #+#    #+#             */
/*   Updated: 2024/10/13 14:13:39 by husrevakbas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_handle_convertion_identifiers(char *flags, va_list args, int *res)
{
	char	*str_to_print;
	//char	handle_char[2];

	// WILL BE ADDED IN CONVERTION HANDLERS
	// check min field
	// check precision
	// check length modifier
	// check conversion specifier
	// convert
	// write
	// DONT FORGET TO COUNT PRINTED CHARS

	
	// apply flags and print cspdiuxX%
	if (ft_strchr(flags, 'c'))
		ft_handle_char(flags, args, res);
	if (ft_strchr(flags, 'd') || ft_strchr(flags, 'i'))
		ft_handle_int(flags, args, res);
	if (ft_strchr(flags, 's'))
		ft_handle_string(flags, args, res);
	if (ft_strchr(flags, 'p'))
	{
		//WILL BE CONVERTED
		unsigned long i = (unsigned long) va_arg(args, void *);
		if (i == 0)
		{
			ft_putstr_fd("(nil)", 1);
			*res += 5;
		}
		else
		{
			str_to_print = ft_itobase_ul(i, get_const("hex_low"));
			ft_putstr_fd("0x", 1);
			ft_putstr_fd(str_to_print, 1);
			*res += ft_strlen(str_to_print) + 2;
			free(str_to_print);
		}
	}
	if (ft_strchr(flags, 'u'))
	{
		//WILL BE CONVERTED
		str_to_print = ft_itobase((unsigned int) va_arg(args, unsigned int), get_const("decimal"));
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

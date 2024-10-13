/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_ulong.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husrevakbas <husrevakbas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 20:06:34 by husrevakbas       #+#    #+#             */
/*   Updated: 2024/10/13 23:09:16 by husrevakbas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_handle_ulong(char *flags, va_list args, int *res)
{
	char			*str_to_print;
	unsigned long	i;

	(void) flags;
	i = (unsigned long) va_arg(args, void *);
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

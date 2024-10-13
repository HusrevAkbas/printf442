/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husrevakbas <husrevakbas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 14:08:58 by husrevakbas       #+#    #+#             */
/*   Updated: 2024/10/13 14:13:06 by husrevakbas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_handle_string(char *flags, va_list args, int *res)
{
	char	*str_to_print;
	
	(void) flags;
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
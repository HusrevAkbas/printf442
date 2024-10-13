/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_uint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husrevakbas <husrevakbas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 20:13:50 by husrevakbas       #+#    #+#             */
/*   Updated: 2024/10/13 23:07:53 by husrevakbas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_handle_uint(char *flags, va_list args, int *res, const char *base)
{
	char	*str_to_print;

	(void) flags;
	str_to_print = ft_itobase((unsigned int) va_arg(args, unsigned int), base);
	ft_putstr_fd(str_to_print, 1);
	*res += ft_strlen(str_to_print);
	free(str_to_print);
}

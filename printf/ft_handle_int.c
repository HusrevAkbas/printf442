/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husrevakbas <husrevakbas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 14:05:12 by husrevakbas       #+#    #+#             */
/*   Updated: 2024/10/13 23:05:37 by husrevakbas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_handle_int(char *flags, va_list args, int *res)
{
	char	*str_to_print;

	(void) flags;
	str_to_print = ft_itoa(va_arg(args, int));
	if (str_to_print)
	{
		ft_putstr_fd(str_to_print, 1);
		*res += ft_strlen(str_to_print);
	}
	free(str_to_print);
}

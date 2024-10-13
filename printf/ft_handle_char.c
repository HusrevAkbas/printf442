/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husrevakbas <husrevakbas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 13:56:21 by husrevakbas       #+#    #+#             */
/*   Updated: 2024/10/13 14:02:36 by husrevakbas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_handle_char(char *flags, va_list args, int *res)
{
	char	char_and_0[2];
	
	(void) flags;
	char_and_0[0] = va_arg(args, int);
	if (char_and_0[0] == 0)
	{
		write(1, "\0", 1);
		*res += 1;
	}
	else
	{
		char_and_0[1] = 0;
		ft_putstr_fd(char_and_0, 1);
		*res += ft_strlen(char_and_0);
	}
}
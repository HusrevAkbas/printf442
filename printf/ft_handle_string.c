/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huakbas <huakbas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 14:08:58 by husrevakbas       #+#    #+#             */
/*   Updated: 2024/10/15 15:52:02 by huakbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_handle_string(char *flags, va_list args, int *res)
{
	char	*str_to_print;
	char	*str;

	str = va_arg(args, char *);
	if (str)
		str_to_print = ft_set_flagged_str(flags, str, "");
	else
		str_to_print = ft_set_flagged_str(flags, "(null)", "");
	ft_putstr_fd(str_to_print, 1);
	*res += ft_strlen(str_to_print);
	free(str_to_print);
}

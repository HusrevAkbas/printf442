/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_ulong.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huakbas <huakbas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 20:06:34 by husrevakbas       #+#    #+#             */
/*   Updated: 2024/10/14 18:48:56 by huakbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_handle_ulong(char *flags, va_list args, int *res)
{
	char			*str_to_print;
	unsigned long	i;
	char			*num_str;

	i = (unsigned long) va_arg(args, void *);
	if (i == 0)
	{
		str_to_print = ft_set_flagged_str(flags, "(nil)");
		ft_putstr_fd(str_to_print, 1);
		*res += ft_strlen(str_to_print);
	}
	else
	{
		num_str = ft_itobase_ul(i, get_const("hex_low"));
		str_to_print = ft_set_flagged_str(flags, ft_strjoin("0x", num_str));
		ft_putstr_fd(str_to_print, 1);
		*res += ft_strlen(str_to_print);
		free(str_to_print);
		free(num_str);
	}
}

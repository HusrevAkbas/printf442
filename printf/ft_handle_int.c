/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huakbas <huakbas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 14:05:12 by husrevakbas       #+#    #+#             */
/*   Updated: 2024/10/14 19:02:25 by huakbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_handle_int(char *flags, va_list args, int *res)
{
	char	*str_to_print;
	char	*num_str;

	num_str = ft_itoa(va_arg(args, int));
	str_to_print = ft_set_flagged_str(flags, num_str);
	if (str_to_print)
	{
		ft_putstr_fd(str_to_print, 1);
		*res += ft_strlen(str_to_print);
	}
	free(str_to_print);
}

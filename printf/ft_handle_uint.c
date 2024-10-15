/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_uint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huakbas <huakbas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 20:13:50 by husrevakbas       #+#    #+#             */
/*   Updated: 2024/10/15 13:16:20 by huakbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_handle_uint(char *flags, va_list args, int *res, const char *base)
{
	char	*str_to_print;
	char	*num_str;

	num_str = ft_itobase_uint((unsigned int) va_arg(args, unsigned int), base);
	str_to_print = ft_set_flagged_str(flags, num_str);
	ft_putstr_fd(str_to_print, 1);
	*res += ft_strlen(str_to_print);
	free(str_to_print);
	free(num_str);
}

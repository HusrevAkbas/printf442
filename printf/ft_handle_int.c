/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huakbas <huakbas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 14:05:12 by husrevakbas       #+#    #+#             */
/*   Updated: 2024/10/15 13:46:35 by huakbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_handle_int(char *flags, va_list args, int *res)
{
	char	*str_to_print;
	char	*num_str;
	int		num;

	num = va_arg(args, int);
	num_str = ft_itoa(num);
	if (ft_strchr(flags, '+') && num >= 0)
		str_to_print = ft_set_flagged_str(flags, ft_strjoin("+", num_str));
	else
		str_to_print = ft_set_flagged_str(flags, num_str);
	if (str_to_print)
	{
		ft_putstr_fd(str_to_print, 1);
		*res += ft_strlen(str_to_print);
	}
	free(num_str);
	free(str_to_print);
}

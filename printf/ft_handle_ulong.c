/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_ulong.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huakbas <huakbas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 20:06:34 by husrevakbas       #+#    #+#             */
/*   Updated: 2024/10/15 15:51:46 by huakbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*set_prefix(char *flags)
{
	char	*prefix;
	int		i;

	i = 0;
	prefix = "";
	if (ft_strchr(flags, ' '))
		prefix = " ";
	if (ft_strchr(flags, '+'))
		prefix = "+";
	prefix = ft_strjoin(prefix, "0x");
	return (prefix);
}

void	ft_handle_ulong(char *flags, va_list args, int *res)
{
	char			*str_to_print;
	unsigned long	i;
	char			*num_str;
	char			*prefix;

	i = (unsigned long) va_arg(args, void *);
	if (i == 0)
	{
		str_to_print = ft_set_flagged_str(flags, "(nil)", "");
		ft_putstr_fd(str_to_print, 1);
		*res += ft_strlen(str_to_print);
	}
	else
	{
		prefix = set_prefix(flags);
		num_str = ft_itobase_ul(i, get_const("hex_low"));
		if (is_zeropad(flags))
			str_to_print = ft_set_zeropadded_str(flags, num_str, prefix);
		else
			str_to_print = ft_set_flagged_str(flags, num_str, prefix);
		ft_putstr_fd(str_to_print, 1);
		*res += ft_strlen(str_to_print);
		free(prefix);
		free(num_str);
	}
	free(str_to_print);
}

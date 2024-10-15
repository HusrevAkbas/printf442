/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huakbas <huakbas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 14:05:12 by husrevakbas       #+#    #+#             */
/*   Updated: 2024/10/15 18:50:45 by huakbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	is_zeropad(char *flags)
{
	int	i;
	int	res;
	
	i = 0;
	res = 0;
	while (ft_strchr(get_const("flags"), flags[i]))
	{
		if (flags[i] == '-')
			return (0);
		if (flags[i] == '0')
			res = 1;
		i++;
	}
	return (res);
}

void	ft_handle_int(char *flags, va_list args, int *res)
{
	char	*str_to_print;
	char	*num_str;
	char	*prefix;
	int		num;

	num = va_arg(args, int);
	num_str = ft_itoa(num);
	prefix = "";
	if (ft_strchr(flags, ' ') && num >= 0)
		prefix = " ";
	if (ft_strchr(flags, '+') && num >= 0)
		prefix = "+";
	if (is_zeropad(flags))
	{
		if(num_str[0] == '-')
		{
			prefix = "-";
			ft_memmove(num_str, &num_str[1], ft_strlen(num_str) + 1);
		}
		str_to_print = ft_set_zeropadded_str(flags, num_str, prefix);
	}
	else
		str_to_print = ft_set_flagged_str(flags, num_str, prefix);
	if (str_to_print)
	{
		ft_putstr_fd(str_to_print, 1);
		*res += ft_strlen(str_to_print);
	}
	free(num_str);
	free(str_to_print);
}

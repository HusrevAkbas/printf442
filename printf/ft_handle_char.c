/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huakbas <huakbas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 13:56:21 by husrevakbas       #+#    #+#             */
/*   Updated: 2024/10/16 12:28:38 by huakbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_handle_char(char *flags, va_list args, int *res)
{
	char	char_and_null[2];
	char	*newstr;

	char_and_null[0] = va_arg(args, int);
	char_and_null[1] = 0;
	newstr = ft_set_flagged_str(flags, char_and_null, "");
	*res += ft_print_count(newstr);
	if (char_and_null[0] == 0)
		*res += 1;
	free(newstr);
}

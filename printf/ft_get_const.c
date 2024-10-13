/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_const.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husrevakbas <husrevakbas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 15:23:12 by huakbas           #+#    #+#             */
/*   Updated: 2024/10/13 23:08:25 by husrevakbas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

const char	*get_const(char *set)
{
	if (!ft_strncmp(set, "flags", 5))
		return ("-0. #+");
	if (!ft_strncmp(set, "con_id", 6))
		return ("cspdiuxX");
	if (!ft_strncmp(set, "hex_up", 6))
		return ("0123456789ABCDEF");
	if (!ft_strncmp(set, "hex_low", 7))
		return ("0123456789abcdef");
	if (!ft_strncmp(set, "decimal", 7))
		return ("0123456789");
	return ("");
}
// const char	*get_flags()
// {
// 	return ("-0. #+");
// }
// const char	*get_convertion_identifiers()
// {
// 	return ("cspdiuxX");
// }
// const char	*get_hex_set_uppercase()
// {
// 	return ("0123456789ABCDEF");
// }
// const char	*get_hex_set_lowercase()
// {
// 	return ("0123456789abcdef");
// }
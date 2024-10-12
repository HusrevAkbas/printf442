/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_const.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huakbas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 15:23:12 by huakbas           #+#    #+#             */
/*   Updated: 2024/10/12 15:23:14 by huakbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

const char *get_const(char *set)
{
	if (!ft_strncmp(set, "flags", ft_strlen(set)))
		return ("-0. #+");
	if (!ft_strncmp(set, "con_id", ft_strlen(set)))
		return ("cspdiuxX");
	if (!ft_strncmp(set, "hex_up", ft_strlen(set)))
		return ("0123456789ABCDEF");
	if (!ft_strncmp(set, "hex_low", ft_strlen(set)))
		return ("0123456789abcdef");
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
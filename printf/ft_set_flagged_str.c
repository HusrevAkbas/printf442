/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_flagged_str.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huakbas <huakbas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:23:46 by huakbas           #+#    #+#             */
/*   Updated: 2024/10/14 18:57:08 by huakbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_set_flagged_str(char *flags, char *converted_str)
{
	char	*str;
	int		i;
	size_t	width;
	size_t	length_constr;

	i = 0;
	length_constr = ft_strlen(converted_str);
	while (ft_strchr(get_const("flags"), flags[i]))
		i++;
	width = ft_atoi(&flags[i]);
	if (width < length_constr)
		width = length_constr;
	str = ft_calloc(width + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_memset(str, ' ', width);
	if (ft_strchr(flags, '-'))
		ft_memcpy(str, converted_str, length_constr);
	else
		ft_memcpy(str + width - length_constr, converted_str, length_constr);
	if (converted_str[0] == 0)
		str[width -1] = 0;
	return (str);
}

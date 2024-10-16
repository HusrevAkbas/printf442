/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_flagged_str.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huakbas <huakbas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:23:46 by huakbas           #+#    #+#             */
/*   Updated: 2024/10/16 13:49:45 by huakbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_set_flagged_str(char *flags, char *str, char *prefix)
{
	char	*str_new;
	int		i;
	size_t	width;
	size_t	len_str;
	size_t	len_pfix;

	i = 0;
	len_str = ft_strlen(str);
	len_pfix = ft_strlen(prefix);
	while (ft_strchr(get_const("flags"), flags[i]))
		i++;
	width = ft_atoi(&flags[i]);
	if (ft_strchr(flags, 'c') && str[0] == 0 && width > 0)
		width--;
	if (width < len_str + len_pfix)
		width = len_str + len_pfix;
	str_new = ft_calloc(width + 1, sizeof(char));
	if (str_new == NULL)
		return (NULL);
	ft_memset(str_new, ' ', width);
	if (ft_strchr(flags, '-'))
	{
		ft_memcpy(str_new, prefix, len_pfix);
		ft_memcpy(str_new + len_pfix, str, len_str);
	}
	else
	{
		ft_memcpy(str_new + (width - len_str), str, len_str);
		ft_memcpy(str_new + (width - len_str - len_pfix), prefix, len_pfix);
	}
	return (str_new);
}

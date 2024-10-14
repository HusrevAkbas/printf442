/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_flagged_str.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huakbas <huakbas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:23:46 by huakbas           #+#    #+#             */
/*   Updated: 2024/10/14 17:27:53 by huakbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_set_flagged_str(char *flags, char *converted_str)
{
	char	*str;
	size_t	width;
	size_t	length_constr;
	//int		if_dot;

	length_constr = ft_strlen(converted_str);
	width = ft_atoi(flags);
//printf("\nlen con: %zu, w: %zu\n",length_constr, width);
	if (width < length_constr)
		width = length_constr;
	str = ft_calloc(width + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_memset(str, ' ', width);
//printf("\nstr: %s\n", str);
	ft_memcpy(str + width - length_constr, converted_str, length_constr + 1);
	if (converted_str[0] == 0)
		str[width -1] = 0;
	return (str);
}
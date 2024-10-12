/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huakbas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 18:25:55 by huakbas           #+#    #+#             */
/*   Updated: 2024/10/05 18:25:58 by huakbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdio.h>
#include <stdarg.h>
#include <limits.h>

int ft_printf(const char *format, ...);
void ft_handle_convertion_identifiers(char *flags, va_list args, int *res);
char *ft_itobase(unsigned long nbr, const char *base);
const char *get_const(char *set);
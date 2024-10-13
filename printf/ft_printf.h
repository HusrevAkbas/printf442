/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husrevakbas <husrevakbas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 18:25:55 by huakbas           #+#    #+#             */
/*   Updated: 2024/10/13 14:09:57 by husrevakbas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdio.h>
#include <stdarg.h>
#include <limits.h>

int ft_printf(const char *format, ...);
void ft_handle_convertion_identifiers(char *flags, va_list args, int *res);
char *ft_itobase(unsigned int nbr, const char *base);
const char *get_const(char *set);
char	*ft_itobase_ul(unsigned long nbr, const char *base);
void	ft_handle_char(char *flags, va_list args, int *res);
void	ft_handle_int(char *flags, va_list args, int *res);
void	ft_handle_string(char *flags, va_list args, int *res);
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husrevakbas <husrevakbas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 18:25:55 by huakbas           #+#    #+#             */
/*   Updated: 2024/10/18 18:40:30 by husrevakbas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"
# include <stdarg.h>
# include <limits.h>

int			ft_printf(const char *format, ...);
void		ft_handle_convertion(char *flags, va_list args, int *res);
char		*ft_itobase_uint(unsigned int nbr, const char *base);
const char	*get_const(char *set);
char		*ft_itobase_ul(unsigned long nbr, const char *base);
void		ft_handle_char(char *flags, va_list args, int *res);
void		ft_handle_int(char *flags, va_list args, int *res);
void		ft_handle_string(char *flags, va_list args, int *res);
void		ft_handle_pointer(char *flags, va_list args, int *res);
void		ft_handle_uint(char *f, va_list a, int *r, const char *b);
char		*ft_set_flagged_str(char *flags, char *str, char *prefix);
char		*ft_set_zeropadded_str(char *flags, char *str, char *prefix);
int			is_zeropad(char *flags);
int			set_precision(char *flags);
#endif // FT_PRINTF_H

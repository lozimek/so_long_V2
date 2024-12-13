/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukozime <lukozime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:16:04 by lukozime          #+#    #+#             */
/*   Updated: 2024/11/14 19:09:40 by lukozime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		ft_parscheck(char c, va_list *args);
int		ft_myputchar(char c);
int		ft_myputstr(char *str);
int		ft_myputnbr(int long long nb);
int		ft_myputbase(unsigned long long nb, char *base);
int		ft_handle_pointer(void *ptr);
#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukozime <lukozime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:13:22 by lukozime          #+#    #+#             */
/*   Updated: 2024/11/27 17:37:50 by lukozime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	size_t	i;
	size_t	count_char;

	i = 0;
	count_char = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			count_char += ft_parscheck(format[i + 1], &args);
			i++;
		}
		else
			count_char += write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (count_char);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char *var = "sda";
// 	ft_printf("%\n");
// 	// printf("\n%");
// 	return (0);
// }

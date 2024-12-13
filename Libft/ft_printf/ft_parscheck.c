/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parscheck.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukozime <lukozime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:18:39 by lukozime          #+#    #+#             */
/*   Updated: 2024/11/19 13:55:02 by lukozime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parscheck(char c, va_list *args)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_myputchar(va_arg(*args, int));
	else if (c == 's')
		count += ft_myputstr(va_arg(*args, char *));
	else if (c == 'd' || c == 'i')
		count += ft_myputnbr(va_arg(*args, int));
	else if (c == 'u')
		count += ft_myputnbr(va_arg(*args, unsigned));
	else if (c == '%')
		count += ft_myputchar('%');
	else if (c == 'x')
		count += ft_myputbase(va_arg(*args, unsigned), "0123456789abcdef");
	else if (c == 'X')
		count += ft_myputbase(va_arg(*args, unsigned), "0123456789ABCDEF");
	else if (c == 'p')
		count += ft_handle_pointer(va_arg(*args, void *));
	return (count);
}

int	ft_handle_pointer(void *ptr)
{
	int	count;

	count = 0;
	if (ptr == NULL)
		count += ft_myputstr("(nil)");
	else
	{
		count += ft_myputstr("0x");
		count += ft_myputbase((unsigned long long)ptr, "0123456789abcdef");
	}
	return (count);
}

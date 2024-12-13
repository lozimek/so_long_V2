/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_my_function.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukozime <lukozime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:49:54 by lukozime          #+#    #+#             */
/*   Updated: 2024/11/14 19:17:05 by lukozime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_myputchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_myputstr(char *str)
{
	int	i;

	i = -1;
	if (!str)
		return (ft_myputstr("(null)"));
	while (str[++i])
		write(1, &str[i], 1);
	return (i);
}

int	ft_myputnbr(int long long nb)
{
	unsigned int	i;

	i = 0;
	if (nb < 0)
	{
		nb = -nb;
		i += ft_myputchar('-');
	}
	if (nb > 9)
		i += ft_myputnbr(nb / 10);
	ft_myputchar((nb %= 10) + 48);
	i++;
	return (i);
}

int	ft_myputbase(unsigned long long nb, char *base)
{
	unsigned int	i;

	i = 0;
	if (nb >= 16)
		i += ft_myputbase(nb / 16, base);
	ft_myputchar((base[nb % 16]));
	i++;
	return (i);
}

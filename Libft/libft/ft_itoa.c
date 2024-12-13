/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukozime <lukozime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:09:38 by lukozime          #+#    #+#             */
/*   Updated: 2024/11/16 11:50:29 by lukozime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nlen(int c)
{
	int	i;

	i = 1;
	if (c < 0)
		i++;
	while (c / 10)
	{
		i++;
		c /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long long	nb;
	char		*str;
	int			neg;
	int			len;

	nb = n;
	len = ft_nlen(nb);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	neg = 1;
	if (n < 0)
	{
		str[0] = '-';
		neg = -1;
	}
	str[len--] = '\0';
	str[len--] = ((n % 10) * neg) + '0';
	while (n / 10)
	{
		n /= 10;
		str[len--] = ((n % 10) * neg) + '0';
	}
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%s", ft_itoa(-2147483648));
// 	return (0);
// }
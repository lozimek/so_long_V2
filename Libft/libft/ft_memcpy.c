/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukozime <lukozime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:54:26 by lukozime          #+#    #+#             */
/*   Updated: 2024/11/04 15:55:11 by lukozime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	unsigned char			*str;
	unsigned const char		*rts;

	if (!dest && !src)
		return (dest);
	str = dest;
	rts = src;
	while (size--)
		*str++ = *rts++;
	return (dest);
}

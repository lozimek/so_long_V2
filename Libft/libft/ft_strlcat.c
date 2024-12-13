/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukozime <lukozime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:01:08 by lukozime          #+#    #+#             */
/*   Updated: 2024/11/06 12:01:56 by lukozime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	if ((!dst || !src))
		return (0);
	if (dstsize == 0)
		return (ft_strlen(src));
	i = 0;
	if (ft_strlen(dst) >= dstsize)
		return (dstsize + ft_strlen(src));
	j = ft_strlen(dst);
	while (src[i] && j + 1 < dstsize)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]));
}

/*#include <stdio.h>
#include <string.h>
int	main()
{
	char	dst[50] = "salut";
	printf("%ld\n", ft_strlcat(dst, "ca va?", 6));
	return 0;
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukozime <lukozime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:04:58 by lukozime          #+#    #+#             */
/*   Updated: 2024/11/12 14:19:44 by lukozime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *src, unsigned int start, size_t len)
{
	char	*dst;
	size_t	i;
	size_t	size;

	if (!src)
		return (NULL);
	size = ft_strlen(src);
	if (start > size)
		return (ft_strdup(""));
	if (start + len > size)
		len = size - start;
	dst = malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dst[i] = (char)src[start];
		i++;
		start++;
	}
	dst[i] = '\0';
	return (dst);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%s", ft_substr("salut", 1, 4));
	return (0);
}*/
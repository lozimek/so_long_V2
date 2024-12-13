/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukozime <lukozime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:20:39 by lukozime          #+#    #+#             */
/*   Updated: 2024/11/06 18:45:27 by lukozime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dst;
	int		size;
	int		i;

	size = ft_strlen(src);
	dst = malloc(sizeof(char) * (size + 1));
	if (!dst)
		return (0);
	i = 0;
	while (size--)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

/*#include <stdio.h>

int	main()
{
	printf("%s", ft_strdup("coucou"));
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukozime <lukozime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:58:01 by lukozime          #+#    #+#             */
/*   Updated: 2024/11/22 16:27:13 by lukozime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	int		i;
	int		j;

	i = -1;
	j = -1;
	if (!s1 && !s2)
		return (ft_strdup(""));
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	dst = malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
	if (!dst)
		return (NULL);
	while (s1[++i])
		dst[i] = s1[i];
	while (s2[++j])
		dst[i + j] = s2[j];
	dst[i + j] = '\0';
	return (dst);
}

// #include <stdio.h>

// int  main()
// {
//      printf("%s", ft_strjoin(NULL, "test"));
//      return (0);
// }

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%s", ft_strjoin(NULL, "test"));
// 	return (0);
// }
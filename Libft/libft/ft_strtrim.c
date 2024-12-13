/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukozime <lukozime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:09:51 by lukozime          #+#    #+#             */
/*   Updated: 2024/11/16 09:38:16 by lukozime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dst;
	size_t	size;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	size = ft_strlen(s1);
	while (ft_strchr(set, s1[size]) && size)
		size--;
	dst = ft_substr((char *)s1, 0, size + 1);
	return (dst);
}
// #include <stdio.h>
// #include <ctype.h>

// int  main(void)
// {
//      printf("%s\n", ft_strtrim("salut ca va", ""));
//      return (0);
//
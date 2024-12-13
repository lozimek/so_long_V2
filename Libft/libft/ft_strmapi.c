/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukozime <lukozime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:01:30 by lukozime          #+#    #+#             */
/*   Updated: 2024/11/11 13:10:02 by lukozime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*dst;

	if (!s)
		return (NULL);
	dst = ft_strdup(s);
	if (!dst)
		return (NULL);
	i = 0;
	if (s[i] && dst[i])
	{
		while (dst[i])
		{
			dst[i] = (f)(i, s[i]);
			i++;
		}
	}
	dst[i] = '\0';
	return (dst);
}

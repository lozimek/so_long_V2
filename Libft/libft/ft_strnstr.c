/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukozime <lukozime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:33:06 by lukozime          #+#    #+#             */
/*   Updated: 2024/11/04 18:33:59 by lukozime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*res;

	if ((!big || !little) && (len == 0))
		return (0);
	i = 0;
	res = (char *) big;
	if (ft_strlen(little) == 0 || big == little)
		return (res);
	while (big[i] && i < len)
	{
		j = 0;
		while (res[i + j] && little[j] && res[i + j] == little[j]
			&& i + j < len)
			j++;
		if (j == ft_strlen(little))
			return (res + i);
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukozime <lukozime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:27:33 by lukozime          #+#    #+#             */
/*   Updated: 2024/11/16 10:24:47 by lukozime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s != c && (*(s + 1) == c || *(s + 1) == '\0'))
			count++;
		s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		len;
	int		i;

	strs = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!s || !strs)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				len = ft_strlen(s);
			else
				len = ft_strchr(s, c) - s;
			strs[i++] = ft_substr(s, 0, len);
			s += len;
		}
	}
	strs[i] = NULL;
	return (strs);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char str[] = "  Petit  test de split a vous de me dire  ";
// 	char c = ' ';
// 	char **split_result;
// 	int i = 0;

// 	split_result = ft_split(str, c);
// 	printf("Résultat du split :\n");
// 	while (split_result[i])
// 	{
// 		printf("'%s'\n", split_result[i]);
// 		free(split_result[i]);
// 		i++;
// 	}
// 	free(split_result);
// 	return (0);
// }

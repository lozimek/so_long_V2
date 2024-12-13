/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukozime <lukozime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:11:37 by lukozime          #+#    #+#             */
/*   Updated: 2024/11/16 15:01:17 by lukozime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count != 0 && size > SIZE_MAX / count)
		return (NULL);
	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

// int main()
// {
// 	void *ptr;
// 	//void *ptr2 = calloc(-5, -5);

// 	//ptr = ft_calloc(-5, -5);
// 	printf("test = %zu\n", (SIZE_MAX - 5) );
// 	//printf("ft_calloc = %p\n", ptr);
// 	//printf("calloc = %p\n", ptr2);
// 	//free(ptr);
// }
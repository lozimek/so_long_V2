/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukozime <lukozime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:00:32 by lukozime          #+#    #+#             */
/*   Updated: 2024/11/12 14:53:23 by lukozime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*next;

	if (lst && del)
	{
		tmp = *lst;
		while (tmp)
		{
			next = tmp->next;
			ft_lstdelone(tmp, del);
			tmp = next;
		}
		*lst = NULL;
	}
}

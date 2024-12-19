/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukozime <lukozime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 11:40:42 by lukozime          #+#    #+#             */
/*   Updated: 2024/12/19 16:25:14 by lukozime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_map_name(char *map_name)
{
	int	i;

	i = ft_strlen(map_name);
	if (map_name[i - 4] != '.' || map_name[i - 3] != 'b' ||
			 map_name[i - 2] != 'e' || map_name[i - 1] != 'r')
			 error(1);
}
void	print_error(char *message)
{
	ft_putstr_fd(RED, 2);
	ft_putstr_fd(message, 2);
	ft_putstr_fd(DEF, 2);
	exit(EXIT_FAILURE);
}

void	error(int x)
{
	if (x == 1)
		print_error(ERR_MAPEXTENSION);
	else if (x == 2)
		print_error(ERR_CHECKFILE);
	else if (x == 3)
		print_error(ERR_EMPTYLINE);
	else if (x == 4)
		print_error(ERR_MAPLEN);
	else if (x == 5)
		print_error(ERR_MAPWALL);
	else if (x == 6)
		print_error(ERR_MAPELEM);
	else if (x == 7)
		print_error(ERR_DOUBLEELEM);
}

void	check_file(int fd)
{
	if (fd < 0)
		error(2);
}
void	check_empty_line(char *line)
{
	int	i;

	i = 0;
	while (line[i])
	{
		if (line[0] == '\n' || (line[i] == '\n' && line[i + 1] == '\n'))
			error(3);
		i++;
	}
}
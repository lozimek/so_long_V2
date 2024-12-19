/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukozime <lukozime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:08:21 by lukozime          #+#    #+#             */
/*   Updated: 2024/12/19 16:25:54 by lukozime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	config_game(char *map_file, t_var *var)
{
	char	**game;
	char	*line;

	var->moves = 1;
	check_map_name(map_file);
	var->fd = open(map_file, O_RDONLY);
	check_file(var->fd);
	line = get_next_line(var->fd);
	check_empty_line(line);
	game = ft_split(line, '\n');
	check_lenmap(game);
	check_mapwall(game);
	check_elements(game, var);
	// setup_game(game, var);
}

int	main(int ac, char **av)
{
	t_var	var;

	if (ac == 2)
		config_game(av[1], &var);
	return (0);
}

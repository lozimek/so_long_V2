/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   config_game.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukozime <lukozime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:06:12 by lukozime          #+#    #+#             */
/*   Updated: 2024/12/19 14:49:40 by lukozime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	setup_game(char **game, t_var *var)
{
	var->game = game;
	var->mlx = mlx_init();
	var->mlx_win = mlx_new_window(var->mlx, ft_strlen(game[0]) * 30,
				 map_height(game) * 30, "SO_LONG!");
	mlx_loop(var->mlx);
	// if (var->mlx_win == NULL)
	// 	return (error);
}

int	map_height(char **game)
{
	int	count;

	count = 0;
	if (game == NULL)
		return (count);
	while (game[count] != NULL)
		count++;
	return (count);
}
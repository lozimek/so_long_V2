/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukozime <lukozime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 12:34:43 by lukozime          #+#    #+#             */
/*   Updated: 2024/12/19 16:32:25 by lukozime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_lenmap(char **game)
{
	int	i;

	i = 1;
	while (game[i])
	{
		if (ft_strlen(game[0]) != ft_strlen(game[i]))
			error(4);
		i++;
	}
}
void	check_mapwall(char **game)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (game[j])
		j++;
	j--;
	while (game[0][i] && game[j][i])
	{
		if (game[0][i] != '1' || game[j][i] != '1')
			error(5);
		i++;
	}
	check_sidewall(game);
}

void	check_sidewall(char **game)
{
	int	i;
	int	j;

	i = 1;
	j = ft_strlen(game[i]);
	while (game[i])
	{
		if (game[i][0] != '1' || game[i][j - 1] != '1')
			error(5);
		i++;
	}
}

void	check_elements(char **game, t_var *var)
{
	var->i = 0;

	while (game[var->i])
	{
		var->j = 0;
		while (game[var->i][var->j])
		{
			if (game[var->i][var->j] != PLAYER && game[var->i][var->j] != EXIT
				&& game[var->i][var->j] != WALL
				&& game[var->i][var->j] != EMPTY_SPACE
				&& game[var->i][var->j] != COLLECTIBLE)
				error(6);
			var->j++;
		}
		var->i++;
	}
	check_double(game, var);
}
void	check_double(char **game, t_var *var)
{
	var->i = 0;
	var->c = 0;
	var->e = 0;
	var->p = 0;

	while (game[var->i])
	{
		var->j = 0;
		while (game[var->i][var->j])
		{
			if (game[var->i][var->j] == COLLECTIBLE)
				var->c++;
			else if (game[var->i][var->j] == PLAYER)
				var->p++;
			else if (game[var->i][var->j] == EXIT)
				var->e++;
			var->j++;
		}
		var->i++;
	}
	if (var->e != 1 || var->p != 1 || var->c < 1)
		error(7);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukozime <lukozime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 11:44:15 by lukozime          #+#    #+#             */
/*   Updated: 2024/12/19 16:34:16 by lukozime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <mlx.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include "Libft/libft/libft.h"
# include "Libft/inc/ft_printf.h"
# include "Libft/inc/get_next_line.h"

/*COLORS*/
# define RESET "\033[0m"
# define GREEN "\033[32m"
# define CYAN "\033[36m"
# define MAGENTA "\033[35m"
# define YELLOW "\033[33m"
# define BLUE "\033[34m"
# define RED "\033[31m"
# define PURPLE "\033[1m\033[38;5;197m"
# define DEF "\033[0m"

/*Errors*/
# define ERR_MAPEXTENSION "Error :\nInvalid file extension\n"
# define ERR_CHECKFILE "Error :\nFile does not exist\n"
# define ERR_EMPTYLINE "Error :\nMap contains an empty line"
# define ERR_MAPLEN "Error :\nMap is not rectangular\n"
# define ERR_MAPWALL "Error :\nMap is not completely closed by walls (1)\n"
# define ERR_MAPELEM "Error :\nWrong element\n"
# define ERR_DOUBLEELEM "Error :\nWrong number of element\n"

/*Elements*/
# define WALL '1'
# define EMPTY_SPACE '0'
# define COLLECTIBLE 'C'
# define EXIT 'E'
# define PLAYER 'P'

typedef struct s_pos
{
	int	x;
	int	y;
}		t_pos;

typedef struct s_var
{
	void	*mlx;
	void	*mlx_win;
	int	i;
	int	j;
	int	p;
	int	c;
	int	e;
	int	fd;
	int	moves;
	char	**game;
	char	**map;
	char	**map_cpy;
	t_pos pos;
}		t_var;

void	check_map_name(char *map_name);
void	error(int x);
void	check_file(int fd);
void	check_empty_line(char *line);
void	check_lenmap(char **game);
void	check_mapwall(char **game);
void	check_sidewall(char **game);
void	check_rectanglemap(char **game);
int		map_height(char **game);
void	setup_game(char **game, t_var *var);
void	check_elements(char **game, t_var *var);
void	check_double(char **game, t_var *var);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukozime <lukozime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 11:44:15 by lukozime          #+#    #+#             */
/*   Updated: 2024/12/19 11:12:52 by lukozime         ###   ########.fr       */
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

typedef struct s_pos
{
	int	x;
	int	y;
}		t_pos;

typedef struct s_var
{
	void	*mlx;
	void	*mlx_win;
	int	p;
	int	c;
	int	e;
	int	fd;
	char	**game;
	char	**map;
	char	**map_cpy;
	t_pos pos;
}		t_var;

# define WALL '1'
# define EMPTY SPACE '0'
# define COLLECTIBLE 'C'
# define EXIT 'E'
# define PLAYER 'P'


#endif
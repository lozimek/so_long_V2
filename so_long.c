/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukozime <lukozime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 18:08:17 by lukozime          #+#    #+#             */
/*   Updated: 2024/12/04 18:27:12 by lukozime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <mlx.h>

int main(void) 
{
	void	*mlx;
	void	*mlx_win;

	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 1440, 3200, "HELLO WORLD");
	mlx_loop(mlx);
	return (0);
}
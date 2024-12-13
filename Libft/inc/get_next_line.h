/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukozime <lukozime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 10:16:55 by lukozime          #+#    #+#             */
/*   Updated: 2024/12/03 10:29:51 by lukozime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

char	*get_next_line(int fd);
char	*ft_strchr(char *s, int c);
int		ft_strlen(char *str);
char	*ft_strjoin(char *s1, char *s2);
char	*new_line(int fd, char *stash);
char	*extract_line(char *stash);
char	*next_line(char *stash);

#endif
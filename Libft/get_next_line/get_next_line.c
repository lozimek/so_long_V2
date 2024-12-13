/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukozime <lukozime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 10:38:44 by lukozime          #+#    #+#             */
/*   Updated: 2024/12/05 10:12:07 by lukozime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*new_line(int fd, char *stash)
{
	char	*buffer;
	int		read_size;

	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	read_size = 1;
	while (!ft_strchr(stash, '\n') && read_size != 0)
	{
		read_size = read(fd, buffer, BUFFER_SIZE);
		if (read_size == -1)
		{
			free(stash);
			free(buffer);
			return (NULL);
		}
		buffer[read_size] = '\0';
		stash = ft_strjoin(stash, buffer);
	}
	free(buffer);
	return (stash);
}

char	*extract_line(char *stash)
{
	char	*line;
	int		i;

	i = 0;
	if (stash == NULL || stash[0] == '\0')
		return (NULL);
	while (stash[i] && stash[i] != '\n')
		i++;
	line = malloc(sizeof(char) * (i + 2));
	if (!line)
		return (NULL);
	i = 0;
	while (stash[i] && stash[i] != '\n')
	{
		line[i] = stash[i];
		i++;
	}
	if (stash[i] == '\n')
	{
		line[i] = stash[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*next_line(char	*stash)
{
	char	*rest;
	int		i;
	int		j;

	i = 0;
	while (stash[i] && stash[i] != '\n')
		i++;
	if (stash == NULL || !stash[i])
	{
		free(stash);
		return (NULL);
	}
	rest = malloc(sizeof(char) * (ft_strlen(stash) - i + 1));
	if (!rest)
		return (NULL);
	i++;
	j = 0;
	while (stash[i])
		rest[j++] = stash[i++];
	rest[j] = '\0';
	free(stash);
	return (rest);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	stash = new_line(fd, stash);
	if (!stash)
		return (NULL);
	line = extract_line(stash);
	stash = next_line(stash);
	return (line);
}

// int main(int argc, char **argv)
// {
//   int    fd;
//   char  *next_line;
// (void)argc;
//   fd = open(argv[1], O_RDONLY);
//   while (1)
//   {
//     next_line = get_next_line(fd);
//     if (next_line == NULL)
//       break ;
//     printf("%s", next_line);
//     free(next_line);
//   }
//   close(fd);
//   return (0);
// }
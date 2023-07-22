/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 10:12:14 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/07/22 09:13:31 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <unistd.h>
#include <fcntl.h>

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*read_to_remaining_str(int fd, char *remaining_str)
{
	char	*buffer;
	int		readbytes;

	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	readbytes = 1;
	while (!find_char(remaining_str, '\n') && readbytes != 0)
	{
		readbytes = read(fd, buffer, BUFFER_SIZE);
		if (readbytes == -1)
		{
			free(buffer);
			if (remaining_str)
				free(remaining_str);
			return (NULL);
		}
		buffer[readbytes] = '\0';
		remaining_str = strjoin(remaining_str, buffer);
		if (!remaining_str)
			break ;
	}
	free(buffer);
	return (remaining_str);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*remaining_str = NULL;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	remaining_str = read_to_remaining_str(fd, remaining_str);
	if (!remaining_str)
		return (NULL);
	line = extract_line_from_str(remaining_str);
	remaining_str = update_remaining_str(remaining_str);
	return (line);
}
/*
int	main(void)
{
	char	*line;
	int		i;
	int		fd1;

	fd1 = open("tests/fd_math.txt", O_RDONLY);
	i = 1;
	line = get_next_line(fd1);
	while (line != NULL)
	{
		printf("line [%02d]: %s\n", i, line);
		free(line);
		i++;
		line = get_next_line(fd1);
	}
	close(fd1);
	return (0);
}
*/

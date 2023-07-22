/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 10:12:14 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/07/22 09:24:05 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*find_char(char *str, int character)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	if (character == '\0')
		return ((char *)&str[ft_strlen(str)]);
	while (str[i] != '\0')
	{
		if (str[i] == (char)character)
			return ((char *)&str[i]);
		i++;
	}
	return (0);
}

char	*strjoin(char *s1, char *s2)
{
	size_t	i;
	size_t	j;
	char	*new_str;

	if (!s1)
	{
		s1 = (char *)malloc(1 * sizeof(char));
		if (!s1 || !s2)
			return (NULL);
		s1[0] = '\0';
	}
	new_str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!new_str)
		return (NULL);
	i = -1;
	j = 0;
	if (s1)
		while (s1[++i] != '\0')
			new_str[i] = s1[i];
	while (s2[j])
		new_str[i++] = s2[j++];
	new_str[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	free(s1);
	return (new_str);
}

char	*copy_to_line(char *remaining_str, char *line)
{
	int	i;

	i = 0;
	while (remaining_str[i] && remaining_str[i] != '\n')
	{
		line[i] = remaining_str[i];
		i++;
	}
	if (remaining_str[i] == '\n')
	{
		line[i] = remaining_str[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*extract_line_from_str(char *remaining_str)
{
	int		i;
	char	*line;

	i = 0;
	if (!remaining_str[i])
		return (NULL);
	while (remaining_str[i] && remaining_str[i] != '\n')
		i++;
	if (remaining_str[i] == '\n')
		i += 1;
	line = (char *)malloc(sizeof(char) * (i + 1));
	if (!line)
		return (NULL);
	line = copy_to_line(remaining_str, line);
	return (line);
}

char	*update_remaining_str(char *remaining_str)
{
	int		i;
	int		j;
	char	*newremaining_str;

	i = 0;
	while (remaining_str[i] && remaining_str[i] != '\n')
		i++;
	if (!remaining_str[i])
	{
		free(remaining_str);
		return (NULL);
	}
	newremaining_str = (char *)malloc(sizeof(char) * \
						(ft_strlen(remaining_str) - i + 1));
	if (!newremaining_str)
		return (NULL);
	i++;
	j = 0;
	while (remaining_str[i])
		newremaining_str[j++] = remaining_str[i++];
	newremaining_str[j] = '\0';
	free(remaining_str);
	return (newremaining_str);
}

/*
PREVIOUSLY IT WAS LIKE THIS NOW I TRIED TO SPLIT IT IN TWO PARTS 
(copy_to_line and extract_line_from_str)
FOR  THE SAKE OF MAX 25 LINES!!

char	*extract_line_from_str(char *remaining_str)
{
	int		i;
	char	*line;

	i = 0;
	if (!remaining_str[i])
		return (NULL);
	while (remaining_str[i] && remaining_str[i] != '\n')
		i++;
	if (remaining_str[i] == '\n')
		i += 1;
	line = (char *)malloc(sizeof(char) * (i + 1));
	if (!line)
		return (NULL);
	i = 0;
	while (remaining_str[i] && remaining_str[i] != '\n')
	{
		line[i] = remaining_str[i];
		i++;
	}
	if (remaining_str[i] == '\n')
	{
		line[i] = remaining_str[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}
*/

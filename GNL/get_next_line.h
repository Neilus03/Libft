/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 15:28:01 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/07/22 09:15:25 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <stdio.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

char	*get_next_line(int fd);
char	*read_to_remaining_str(int fd, char *remainingStr);
char	*find_char(char *str, int character);
char	*strjoin(char *s1, char *s2);
size_t	ft_strlen(char *str);
char	*extract_line_from_str(char *remainingStr);
char	*update_remaining_str(char *remainingStr);
//int		main(void);
#endif

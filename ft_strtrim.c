/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 11:18:21 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/02/24 19:35:56 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str, char const *del)
{
	int	i;
	int	len;

	i = 0;
	if (!str || !del)
		return (NULL);
	while (str[i] && ft_strchr(del, str[i]))
		i++;
	len = ft_strlen(str);
	while (ft_strrchr(del, str[len]) && len)
		len--;
	return (ft_substr(&str[i], 0, (len - i) + 1));
}
/*
int main()
{
    char *str = "    hello world    ";
    char *set = " ";
    char *trimmed_str = ft_strtrim(str, set);

    if (trimmed_str == NULL) {
        printf("Error: failed to allocate memory for trimmed string\n");
        return 1;
    }

    printf("Original string: \"%s\"\n", str);
    printf("Trimmed string: \"%s\"\n", trimmed_str);

    free(trimmed_str);
    return 0;
}
*/
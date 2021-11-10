/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 14:35:41 by rel-fagr          #+#    #+#             */
/*   Updated: 2021/11/07 15:27:25 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char **ft_create_str(char *s, char **result, char c, int row)
{
	int		j;
	size_t	len;
	unsigned int start;
	int 	i;

	start = 0;
	j = -1;
	i = 0;
	while (++j < row)
	{
		len = 0;
		while(s[i] && s[i] != c)
		{
			i++;
			len++;
		}
		result[j] = ft_substr(s, start, len);
		while(s[i] == c)
			i++;
		start = i;
	}
	free(s);
	return (result);
}

char **ft_split(char const *s, char c)
{
	char** result ;
    int count ;
    char* tmp ;
    char* tmp1;
    char* last_char;
    char to_tab[2];

    to_tab[0] = c;
    to_tab[1] = 0;
	tmp = ft_strtrim(s, to_tab);
	tmp1 = tmp;
    result = 0;
    count = 0;
    last_char = 0;
    while (*tmp)
    {
        if (*tmp == c)
        {
            count++;
			while(*tmp == c)
				tmp++;
        }
        else
			tmp++;
    }
    if (*tmp1)
		count++;
    result = (char **) malloc(sizeof(char*) * (count + 1));
	result[count] = NULL;
	return (ft_create_str(tmp1, result, c,  count));
}
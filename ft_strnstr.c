/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:38:49 by rel-fagr          #+#    #+#             */
/*   Updated: 2021/11/07 12:21:13 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (to_find[0] == '\0')
		return ((char *) str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] && (str[i + j] == to_find[j]) && ((i + j) < len))
		{
			if (to_find[j + 1] == '\0')
				return ((char *) &str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
/*
int main(void)
{
    char haystack[30] = "aaabcabcd";
    char needle[10] = "aabc";
    char *empty = (char*)"";
    printf("%s\n", ft_strnstr(haystack, needle, -1));
    printf("%s\n", ft_strnstr(haystack, "a", -1));
    printf("%s\n", ft_strnstr(haystack, "c", -1));
    printf("%s\n", ft_strnstr(empty, "", -1));
    printf("%s\n", ft_strnstr(empty, "", 0));
    printf("%s\n", ft_strnstr(haystack, needle, 0));
    printf("%s\n", ft_strnstr(empty, "coucou", -1));
    printf("%s\n", ft_strnstr(haystack, "aaabc", 5));
    printf("%s\n", ft_strnstr(empty, "12345", 5));
    printf("%s\n", ft_strnstr(haystack, "abcd", 9));
    printf("%s\n", ft_strnstr(haystack, "cd", 8));
    printf("%s\n", ft_strnstr(haystack, "a", 1) );
    printf("%s\n", ft_strnstr("1", "a", 1) );
    printf("%s\n", ft_strnstr("22", "b", 2));
	printf("***********************************************\n");
	printf("%s\n", strnstr(haystack, needle, -1));
    printf("%s\n", strnstr(haystack, "a", -1));
    printf("%s\n", strnstr(haystack, "c", -1));
    printf("%s\n", strnstr(empty, "", -1));
    printf("%s\n", strnstr(empty, "", 0));
    printf("%s\n", strnstr(haystack, needle, 0));
    printf("%s\n", strnstr(empty, "coucou", -1));
    printf("%s\n", strnstr(haystack, "aaabc", 5));
    printf("%s\n", strnstr(empty, "12345", 5));
    printf("%s\n", strnstr(haystack, "abcd", 9));
    printf("%s\n", strnstr(haystack, "cd", 8));
    printf("%s\n", strnstr(haystack, "a", 1) );
    printf("%s\n", strnstr("1", "a", 1) );
    printf("%s\n", strnstr("22", "b", 2));
    return (0);
}*/

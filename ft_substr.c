/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 14:32:09 by rel-fagr          #+#    #+#             */
/*   Updated: 2021/11/08 21:25:37 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*if_star(void)
{
	char	*ptr;

	ptr = (void *)malloc(sizeof(char));
	ptr[0] = '\0';
	return (ptr);
}

static size_t	new_lenght(char *str, size_t len, unsigned int new_start)
{
	int	i;

	i = 0;
	while (str[new_start] && i < len)
	{
		i++;
		new_start++;
	}
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	char			*str;
	size_t			i;
	size_t			lenght;
	unsigned int	new_start;

	i = 0;
	ptr = NULL;
	str = (char *) s;
	lenght = 0;
	new_start = start;
	if (start > ft_strlen(s))
		return (if_star());
	ptr = (void *)malloc((new_lenght(str, len, new_start) + 1) * sizeof(char));
	if (!ptr)
		return (0);
	while ((i < len) && (str[start] != '\0'))
		ptr[i++] = str[start++];
	ptr[i] = '\0';
	return (ptr);
}
/*
int	main()
{
	char ptr[] = "hello bro";
	char *ptr2;

	ptr2 = ft_substr(ptr,0, 10);
	for (int i = 0; i < 15; i++)
	{
		printf("%x\n", ptr[i]);
		printf("%x\n", ptr2[i]);
		printf("*************\n");
	}
}*/

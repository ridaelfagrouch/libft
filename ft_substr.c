/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 14:32:09 by rel-fagr          #+#    #+#             */
/*   Updated: 2021/11/07 11:59:51 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	lenght;
	char			*ptr;
	char			*str;

	i = 0;
	j = (unsigned int) len;
	str = (char *) s;
	lenght = start + j;
	ptr = (void *)malloc(lenght * sizeof(char));
	while ((start < lenght) && (str[start] != '\0'))
		ptr[i++] = str[start++];
	ptr[start + 1] = '\0';
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

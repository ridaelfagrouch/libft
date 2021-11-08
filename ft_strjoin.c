/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 17:27:19 by rel-fagr          #+#    #+#             */
/*   Updated: 2021/11/07 11:57:51 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lenlen(char const *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

static char	*ft_create_str(char const *s1, char const *s2, int len)
{
	char	*str;
	int		i;

	str = NULL;
	i = 0;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	return (str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		len;
	char	*str;

	len = ft_lenlen(s1) + ft_lenlen(s2);
	str = ft_create_str(s1, s2, len);
	i = 0;
	j = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
		str[i++] = s2[j++];
	str[i] = '\0';
	return (str);
}
/*
int	main(void)
{
	char	s1[] = "hello bro";
	char	s2[] = "rida";

	printf("%s", ft_strjoin(s1, s2));
}*/

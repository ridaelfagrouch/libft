/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 17:49:52 by rel-fagr          #+#    #+#             */
/*   Updated: 2021/11/08 12:00:33 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(const char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

static void	ft_remouv(char *s1)
{
	int	i;

	i = 0;
	while (i < (ft_len(s1) - 1))
	{
		s1[i] = s1[i + 1];
		i++;
	}
	s1[i] = '\0';
}

static void	ft_trim(char *s1, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (s1[0] == set[i])
		{
			ft_remouv(s1);
			i = 0;
			continue ;
		}
		if (s1[ft_len(s1) - 1 ] == set[i])
		{
			s1[ft_len(s1) - 1] = '\0';
			i = 0;
			continue ;
		}
		i++;
	}
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*s1_dup;
	char	*set_dup;
	char	*fin_tab;

	s1_dup = ft_strdup(s1);
	set_dup = ft_strdup(set);
	ft_trim(s1_dup, set_dup);
	fin_tab = ft_strdup(s1_dup);
	free (s1_dup);
	free (set_dup);
	if (!fin_tab)
		return (0);
	return (fin_tab);
}
/*
int    main(void)
{
    printf("%s\n", ft_strtrim("   xxxtripouille", " x"));
    printf("%s\n", ft_strtrim("tripouille   xxx", " x"));
    printf("%s\n", ft_strtrim("   xxxtripouille   xxx", " x"));
    printf("%s\n", ft_strtrim("   xxx   xxx", " x"));
    printf("%s\n", ft_strtrim("", "123"));
    printf("%s\n", ft_strtrim("123", ""));
    printf("%s\n", ft_strtrim("", ""));
    printf("%s\n", ft_strtrim("abcdba", "acb"));
}*/

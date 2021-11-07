/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:30:56 by rel-fagr          #+#    #+#             */
/*   Updated: 2021/11/07 12:11:26 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	int				i;
	int				k;	

	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	i = 0;
	k = 0;
	while (n > 0)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
		n--;
	}
	return (k);
}
/*
int main(void)
{
    char s[] = {-128, 0, 127, 0};
    char sCpy[] = {-128, 0, 127, 0};
    char s2[] = {0, 0, 127, 0};
    char s3[] = {0, 0, 42, 0};
     printf("%d\n", ft_memcmp(s, s2, 0)); 
     printf("%d\n", ft_memcmp(s, s2, 1)); 
     printf("%d\n", ft_memcmp(s2, s, 1));
     printf("%d\n", ft_memcmp(s, sCpy, 4));
     printf("%d\n", ft_memcmp(s2, s3, 4));
    return (0);
}*/

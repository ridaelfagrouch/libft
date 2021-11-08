/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:06:28 by rel-fagr          #+#    #+#             */
/*   Updated: 2021/11/08 21:24:12 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

static void	*ft_else(char *dest, char *src, size_t n)
{
	int	i;

	i = n - 1;
	while (i >= 0)
	{
		dest[i] = src[i];
		if (i == 0)
			break ;
		i--;
	}
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*ptr;
	char	*str;

	i = 0;
	ptr = (char *) dest;
	str = (char *) src;
	if (ptr < str)
	{
		while (n-- > 0)
		{
			ptr[i] = str[i];
			i++;
		}
	}
	else
		ft_else(ptr, str, n);
	return (ptr);
}
/*
int main(void)
{
	char	src[] = "hello";

	printf("%s", memmove(src, src + 2, 5));
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 21:10:32 by rel-fagr          #+#    #+#             */
/*   Updated: 2021/11/07 12:14:04 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;
	char	x;

	x = (char) c;
	i = 0;
	str = (char *) s;
	while (str[i])
	{
		if (x == 0)
			return (str + ft_strlen(str));
		else if (str[i] == x)
			return (&str[i]);
		i++;
	}
	return (0);
}
/*int main()
{
	char str[] = "hello bro";
	printf("%s", strchr(str, 'l'));
}*/

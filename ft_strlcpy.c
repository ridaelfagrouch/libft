/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:31:35 by rel-fagr          #+#    #+#             */
/*   Updated: 2021/11/07 12:17:19 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	size_src;
	size_t	size_dest;
	char	*str;

	size_src = 0;
	size_dest = 0;
	i = 0;
	str = (char *) src;
	while (str[size_src])
		size_src++;
	while (dest[size_dest])
		size_dest++;
	if (size == 0)
		return (size_src);
	else if (size > 0 && size <= size_dest)
	{
		while (str[i] != '\0' && i < (size - 1))
		{
			dest[i] = str[i];
			i++;
		}
	}
	dest[i] = '\0';
	return (size_src);
}

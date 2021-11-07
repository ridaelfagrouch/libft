/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:13:35 by rel-fagr          #+#    #+#             */
/*   Updated: 2021/11/07 12:24:57 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int		i;
	char	*ptr;
	char	*str;

	i = 0;
	ptr = (char *) dest;
	str = (char *) src;
	while (i < n)
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
}

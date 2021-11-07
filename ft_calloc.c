/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:39:23 by rel-fagr          #+#    #+#             */
/*   Updated: 2021/11/07 12:05:57 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int		i;
	size_t	*res;

	res = NULL;
	i = 0;
	res = malloc(count * sizeof(size));
	if (res == NULL)
		return (0);
	while (i < count)
	{
		res[i] = 0;
		i++;
	}
	return ((void *) res);
}
/*
int    main(void)
{
    int    *ptr;
	int		i;

    ptr = (int *) ft_calloc(5, 4);
    for ( i = 0; i < 5; i++)
        printf("%p\n", ptr++);
    return 0;
}*/

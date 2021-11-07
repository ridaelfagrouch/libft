/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:35:44 by rel-fagr          #+#    #+#             */
/*   Updated: 2021/11/07 12:19:31 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	char	*str;
	char	*stp;

	i = 0;
	str = (char *) s2;
	stp = (char *) s1; 
	if (n == 0)
		return (0);
	while (stp[i] && str[i] && i < (n - 1))
	{
		if (stp[i] != str[i])
			return (stp[i] - str[i]);
		i++;
	}
	return (stp[i] - str[i]);
}
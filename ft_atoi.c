/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:00:49 by rel-fagr          #+#    #+#             */
/*   Updated: 2021/11/11 01:34:06 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	wite_space(const char *str, int *i)
{
	while ((str[*i] == ' ') || (str[*i] == '\r')
		|| (str[*i] == '\n') || (str[*i] == '\t')
		|| (str[*i] == '\v') || (str[*i] == '\f'))
	{
		*i += 1;
	}
}

int	ft_atoi(const char *str)
{
	char		*src;
	int			i;
	int			sign;
	long int	k;

	i = 0;
	sign = 1;
	k = 0;
	src = (char *) str;
	wite_space(str, &i);
	if (src[i] == '-')
	{
		sign = sign * -1;
		i++;
	}
	else if (src[i] == '+')
		i++;
	while (src[i] >= 48 && src[i] <= 57)
	{
		k = k * 10 + src[i] - '0';
		i++;
	}
	return (sign * k);
}
/*
int main()	
{
	char str[] = "-55/421";
	printf("%d", atoi(str));
	return (0);
}*/

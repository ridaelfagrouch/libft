/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:00:49 by rel-fagr          #+#    #+#             */
/*   Updated: 2021/11/08 11:53:00 by rel-fagr         ###   ########.fr       */
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
	int	i;
	int	sign;
	int	k;

	i = 0;
	sign = 1;
	k = 0;
	wite_space(str, &i);
	if (str[i] == '-')
	{
		sign = sign * -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		k = k * 10 + str[i] - '0';
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

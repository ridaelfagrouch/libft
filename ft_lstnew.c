/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 09:15:33 by rel-fagr          #+#    #+#             */
/*   Updated: 2021/11/12 09:15:35 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstnew(void *content)
{
    struct s_list *root;

    root = (struct s_list *)malloc(sizeof(struct s_list));
    if(!root)
        return(0);
    root -> content = content;
    root -> next = NULL;
    return (root);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitorarteta <aitorarteta@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 23:03:25 by aitorarteta       #+#    #+#             */
/*   Updated: 2022/09/29 23:03:34 by aitorarteta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
Takes as a parameter a pointer to an element and frees the memory of the
element’s content using the function del given as a parameter, then frees the
memory using free(3). The memory of next must not be freed.
---------------------------------------------------------------------------- */
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && *del)
	{
		del(lst->content);
		free(lst);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitorarteta <aitorarteta@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 23:07:56 by aitorarteta       #+#    #+#             */
/*   Updated: 2022/09/29 23:16:35 by aitorarteta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
Takes as a parameter a pointer to an element of a list, deletes and frees the
memory of this element and every successors using the functions del and free.
Finally the pointer to the element must be set to NULL.
---------------------------------------------------------------------------- */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next_item;

	if (lst && *lst && del)
	{
		while (*lst)
		{
			next_item = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = next_item;
		}
		*lst = NULL;
	}
}

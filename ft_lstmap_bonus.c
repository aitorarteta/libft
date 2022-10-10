/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarteta <aarteta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 23:10:51 by aitorarteta       #+#    #+#             */
/*   Updated: 2022/10/04 21:50:47 by aarteta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
Iterates a list lst and applies the function f to the content of each element.
Create a new list resulting from the successive applications of teh function f.
The del function is used to delete the content of an element if needed.
Returns the new list or NULL if the allocation fails.
---------------------------------------------------------------------------- */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*result;

	if (!lst || !f)
		return (NULL);
	result = NULL;
	while (lst && f)
	{
		temp = ft_lstnew(f(lst->content));
		if (!temp)
		{
			ft_lstclear(&result, del);
			return (NULL);
		}
		else
		{
			ft_lstadd_back(&result, temp);
		}
		lst = lst->next;
	}
	return (result);
}

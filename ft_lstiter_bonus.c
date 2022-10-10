/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitorarteta <aitorarteta@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 23:09:44 by aitorarteta       #+#    #+#             */
/*   Updated: 2022/09/29 23:09:53 by aitorarteta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
Iterates the list and applies the function f to the content of each element.
---------------------------------------------------------------------------- */
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (f)
	{
		while (lst)
		{
			f(lst->content);
			lst = lst->next;
		}
	}
}

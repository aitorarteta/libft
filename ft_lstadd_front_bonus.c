/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitorarteta <aitorarteta@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 22:46:05 by aitorarteta       #+#    #+#             */
/*   Updated: 2022/09/29 22:50:41 by aitorarteta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
Takes as a parameter the adress of a pointer to the first element of a list and
adds the element new at the beginnning of the list.
---------------------------------------------------------------------------- */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new && lst)
	{
		new->next = *lst;
		*lst = new;
	}
}

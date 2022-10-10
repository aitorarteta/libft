/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarteta <aarteta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:42:09 by aarteta           #+#    #+#             */
/*   Updated: 2022/09/26 17:43:16 by aarteta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
The bzero() function writes n zeroed bytes to the string s. Effectively erases
all data by writing zeros (bytes containing '\0').
If n is zero, bzero() does nothing.
---------------------------------------------------------------------------- */

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

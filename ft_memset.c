/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarteta <aarteta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 19:58:57 by aarteta           #+#    #+#             */
/*   Updated: 2022/09/26 21:26:24 by aarteta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
The memset() function writes "len" bytes of value "c" (converted to an unsigned
char) to the string "b". The memset() function returns its first argument.
---------------------------------------------------------------------------- */
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)b;
	while (i < len)
	{
		*ptr++ = (unsigned char)c;
		i++;
	}
	return (b);
}

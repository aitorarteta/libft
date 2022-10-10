/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarteta <aarteta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 20:48:46 by aarteta           #+#    #+#             */
/*   Updated: 2022/09/26 21:22:38 by aarteta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	res;

	res = ft_strlen(src);
	if (n == 0)
		return (res);
	i = 0;
	while (*src && (i < (n - 1)))
		*(dest + i++) = *src++;
	*(dest + i) = '\0';
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarteta <aarteta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 20:59:18 by aarteta           #+#    #+#             */
/*   Updated: 2022/09/27 23:42:53 by aarteta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

/* DESCRIPTION:
The strlcat() function appends the src string to the dest string, overwriting
the terminating null byte at the end of dest, and then adds a terminating null
byte. It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the
result.
Unlike strncat (), it takes the full size of the buffer (not just the length)
and guarantee to NUL-terminate the result (as long as there is at least one
byte free in dst).
Note that a byte for the NULL should be included in size.
Note however, that if strlcat() traverses n characters in dest without finding
a NUL, the length of the string is considered to be n and the destination
string will not be NUL-terminated (since there was no space for the NUL).
This keeps strlcat() from running off the end of a string. In practice this
should not happen (as it means that either size is incorrect or that dst is
not a proper "C" string). The check exists to prevent potential security
problems in incorrect code.
---------------------------------------------------------------------------- */

size_t	ft_strlcat(char *dst, const char *src, size_t dst_size)
{
	size_t	len_src;
	size_t	len_dst;
	size_t	i;
	size_t	j;

	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	i = 0;
	j = len_dst;
	if (len_dst < dst_size - 1 && dst_size > 0)
	{
		while (src[i] != '\0' && j < (dst_size - 1))
		{
			dst[j] = src[i];
			i++;
			j++;
		}
		dst[j] = '\0';
	}
	if (len_dst >= dst_size)
		len_dst = dst_size;
	return (len_dst + len_src);
}

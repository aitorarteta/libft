/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarteta <aarteta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 16:18:55 by aarteta           #+#    #+#             */
/*   Updated: 2022/09/11 16:19:19 by aarteta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
The strnstr() function locates the first occurrence of null-terminated string
needle in the null-terminated string haystack, where not more than n characters
are searched.
If needle is an empty string, haystack is returned;
if needle occurs nowhere in haystack, NULL is returned;
otherwise a pointer to the first character of the first occurrence of needle is
returned.
---------------------------------------------------------------------------- */
char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	if (!(*needle) || haystack == needle)
		return ((char *) haystack);
	i = 0;
	while (*(haystack + i) && (i < n))
	{
		j = 0;
		while (*(haystack + i + j) && *(haystack + i + j) == *(needle + j)
			&& (i + j < n))
			j++;
		if (!(*(needle + j)))
			return ((char *) haystack + i);
		i++;
	}
	return (NULL);
}

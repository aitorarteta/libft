/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarteta <aarteta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 21:17:03 by aarteta           #+#    #+#             */
/*   Updated: 2022/09/09 19:21:08 by aarteta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
The strchr() function locates the last occurrence of c (converted to a char) in
the string pointed to by s. The terminating null character is considered to be
part of the string;
therefore if c is ‘\0’, the functions locate the terminating ‘\0’.
The function returns a pointer to the located character, or NULL if the char
does not appear in the string.
---------------------------------------------------------------------------- */

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (*(s + i) == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}

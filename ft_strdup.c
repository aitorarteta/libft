/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitorarteta <aitorarteta@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 19:20:42 by aarteta           #+#    #+#             */
/*   Updated: 2022/09/29 23:25:08 by aitorarteta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
The strdup() function allocates sufficient memory for a copy of the string s1,
does the copy, and returns a pointer to it. The pointer may subsequently be
used as an argument to the function free().
If insufficient memory is available, NULL is returned.
---------------------------------------------------------------------------- */
char	*ft_strdup(const char *s1)
{
	char	*dest;
	size_t	i;

	dest = (char *) malloc(ft_strlen(s1) + 1);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

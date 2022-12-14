/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarteta <aarteta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:56:10 by aarteta           #+#    #+#             */
/*   Updated: 2022/09/27 19:19:37 by aarteta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_empty_string(void)
{
	char	*s;

	s = (char *) malloc(1);
	if (s == NULL)
		return (NULL);
	*s = '\0';
	return (s);
}

/* DESCRIPTION:
Allocates (with malloc) and returns a new substring from the string s. The
substring begins at index start and is of size len. If start and len aren’t
refering to a valid substring, the behavior is undefined.
If the allocation fails, the function returns NULL.
---------------------------------------------------------------------------- */

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) < (size_t) start)
		return (ft_empty_string());
	if ((ft_strlen(s) - start) < len)
		len = ft_strlen(s) - start;
	sub = (char *) malloc(len + 1);
	if (sub == NULL)
		return (NULL);
	s = s + start;
	i = 0;
	while (*s && i < len)
	{
		sub[i] = *s;
		i++;
		s++;
	}
	*(sub + i) = '\0';
	return (sub);
}

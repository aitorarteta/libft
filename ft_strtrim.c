/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarteta <aarteta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 19:29:14 by aarteta           #+#    #+#             */
/*   Updated: 2022/09/27 23:50:56 by aarteta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters
specified in ’set’ removed from the beginning and the end of the string.
External functs: malloc
Parameters:
	s1: The string to be trimmed.
	set: The reference set of characters to trim.
Return value: The trimmed string; or NULL if the allocation fails.
---------------------------------------------------------------------------- */

static int	ft_ischarset(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (*(set + i))
	{
		if (*(set + i) == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	j;
	size_t	end;
	char	*new;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	while (*(s1 + i) && ft_ischarset(*(s1 + i), set))
		i++;
	end = (int) ft_strlen(s1);
	while (end > i && ft_ischarset(*(s1 + end - 1), set))
		end--;
	new = (char *) malloc(end - i + 1);
	if (new == NULL)
		return (NULL);
	j = 0;
	while (i < end)
		new[j++] = s1[i++];
	*(new + j) = '\0';
	return (new);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarteta <aarteta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 19:22:56 by aarteta           #+#    #+#             */
/*   Updated: 2022/09/09 19:00:15 by aarteta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/* DESCRIPTION:
The strncmp() function lexicographically compares not more than n characters
in the null-terminated strings s1 and s2. Characters that appear after a ‘\0’
character are not compared.
It return an integer greater than, equal to, or less than 0, according as the
string s1 is greater than, equal to, or less than the string s2.
The comparison is done using unsigned characters.
---------------------------------------------------------------------------- */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n && *s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	else
		return ((unsigned char)*s1 - (unsigned char)*s2);
}

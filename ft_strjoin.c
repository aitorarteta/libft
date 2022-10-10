/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitorarteta <aitorarteta@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 20:09:02 by aarteta           #+#    #+#             */
/*   Updated: 2022/09/29 22:23:49 by aitorarteta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
Allocates (with malloc(3)) and returns a new string ending with ’\0’, result of
the concatenation of s1 and s2. If the allocation fails returns NULL.
---------------------------------------------------------------------------- */
/* size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
} */

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*join;

	join = (char *) malloc (ft_strlen(s1) + ft_strlen(s2) + 1);
	while (join == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		join[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
		*(join + i++) = *(s2 + j++);
	*(join + i) = '\0';
	return (join);
}

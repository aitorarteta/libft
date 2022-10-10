/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarteta <aarteta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 21:06:52 by aarteta           #+#    #+#             */
/*   Updated: 2022/09/09 19:00:27 by aarteta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	if (*s == (unsigned char)c)
		return ((char *)s);
	while (*s++)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
	}
	return (NULL);
}

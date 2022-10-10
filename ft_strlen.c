/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitorarteta <aitorarteta@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 19:55:00 by aarteta           #+#    #+#             */
/*   Updated: 2022/09/28 22:26:26 by aitorarteta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/* DESCRIPTION:
The strlen() function calculates the length of the string pointed
to by str, excluding the terminating null byte ('\0').The strlen()
function returns the number of bytes.
---------------------------------------------------------------------------- */
size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

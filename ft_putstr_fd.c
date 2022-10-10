/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitorarteta <aitorarteta@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 22:02:06 by aitorarteta       #+#    #+#             */
/*   Updated: 2022/09/29 22:13:17 by aitorarteta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
Outputs the string s to the file descriptor fd.
---------------------------------------------------------------------------- */
void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (s[i])
		ft_putchar_fd(*(s + i++), fd);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitorarteta <aitorarteta@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 21:52:00 by aitorarteta       #+#    #+#             */
/*   Updated: 2022/09/29 21:52:03 by aitorarteta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
Outputs the char c to the file descriptor fd.
---------------------------------------------------------------------------- */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

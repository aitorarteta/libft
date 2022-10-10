/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitorarteta <aitorarteta@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 22:19:07 by aitorarteta       #+#    #+#             */
/*   Updated: 2022/09/29 22:19:17 by aitorarteta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}

/* DESCRIPTION:
Outputs the integer n to the file descrptor fd.
---------------------------------------------------------------------------- */
void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
		ft_putchar_fd('-', fd);
	if (ft_abs(n) >= 0 && ft_abs(n) <= 9)
		ft_putchar_fd(ft_abs(n) + '0', fd);
	else
	{
		ft_putnbr_fd(ft_abs(n / 10), fd);
		ft_putnbr_fd(ft_abs(n % 10), fd);
	}
}

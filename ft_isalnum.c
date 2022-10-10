/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarteta <aarteta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:33:32 by aarteta           #+#    #+#             */
/*   Updated: 2022/09/26 21:15:34 by aarteta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION:
The isalnum() function tests for any character for which isalpha or isdigit is
true. The value of the argument must be representable as an unsigned char or
the value of EOF.
The isalnum() function returns zero if the character tests false and returns
non-zero if the character tests true.
---------------------------------------------------------------------------- */
#include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/* int main (void)
{
	printf("%i", ft_isalnum('&'));
}
 */

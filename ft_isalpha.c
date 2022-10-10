/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarteta <aarteta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:12:35 by aarteta           #+#    #+#             */
/*   Updated: 2022/09/26 21:12:32 by aarteta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION:
The isalpha() function tests for any character for which isupper or islower is
 true. The value of the argument must be representable as an unsigned char or
 the value of EOF.
 The isalpha() function returns zero if the character tests false and returns
 non-zero if the character tests true.
---------------------------------------------------------------------------- */
// #include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/* int main (void)
{
	printf("%i", ft_isalpha('7'));
}
 */

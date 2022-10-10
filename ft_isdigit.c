/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitorarteta <aitorarteta@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:33:32 by aarteta           #+#    #+#             */
/*   Updated: 2022/09/29 20:18:40 by aitorarteta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/* DESCRIPTION:
The isdigit() function tests for a decimal digit character. Regardless of
locale, this includes the following characters only: '0' through'9'. The
function returns zero if the character tests false and returns non-zero if the
character tests true.
The value of the argument must be representable as an unsigned char or the
value of EOF.
The isnumber() function behaves similarly to isdigit(), but may recognize
additional characters, depending on the current locale setting.
---------------------------------------------------------------------------- */
//#include <stdio.h>

int	ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9'))
		return (1);
	return (0);
}
/* 
int	main(void)
{
	printf("%i\n", ft_isdigit('a'));
}
 */
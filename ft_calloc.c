/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarteta <aarteta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:57:47 by aarteta           #+#    #+#             */
/*   Updated: 2022/09/26 20:55:22 by aarteta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

/* DESCRIPTION:
The strdup() function allocates sufficient memory for a copy of the string s1,
does the copy, and returns a pointer to it. The pointer may subsequently be
used as an argument to the function free().
If insufficient memory is available, NULL is returned.
---------------------------------------------------------------------------- */

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

/* int	main(void)
{
	int* allo_calloc = calloc(5, sizeof(int));

	printf("Values of allocated_with_calloc: ");
		for (size_t i = 0; i < 5; ++i)
			printf("%d ", allo_calloc[i]);
		putchar('\n');
} */

/* DESCRIPTION:
The bzero() function writes n zeroed bytes to the string s. Effectively erases
all data by writing zeros (bytes containing '\0').
If n is zero, bzero() does nothing.
---------------------------------------------------------------------------- */

/* void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
} */

/* DESCRIPTION:
The memset() function writes "len" bytes of value "c" (converted to an unsigned
char) to the string "b". The memset() function returns its first argument.
---------------------------------------------------------------------------- */
/* void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)b;
	while (i < len)
	{
		*ptr++ = (unsigned char)c;
		i++;
	}
	return (b);
} */

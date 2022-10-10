/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarteta <aarteta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 20:43:15 by aarteta           #+#    #+#             */
/*   Updated: 2022/08/31 21:10:28 by aarteta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*temp;
	const char		*aux;
	size_t			i;

	i = 0;
	temp = dst;
	aux = src;
	if (temp == NULL && aux == NULL)
		return (dst);
	while (n > 0)
	{
		temp[i] = aux[i];
		n--;
		i++;
	}
	return (dst);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarteta <aarteta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 23:51:32 by aarteta           #+#    #+#             */
/*   Updated: 2022/09/28 01:05:27 by aarteta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

static char	**ft_free_array(char **array)
{
	int	i;

	i = 0;
	while (*(array + i))
		free(*(array + i++));
	free(array);
	return (NULL);
}

static int	ft_wc(const char *s, char c)
{
	int	i;
	int	count;

	count = 0;
	if (s == NULL)
		return (0);
	i = 0;
	while (*(s + i) && *(s + i) == c)
		i++;
	while (*(s + i))
	{
		if (*(s + i) != c)
		{
			count++;
			while (*(s + i) && *(s + i) != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static void	ft_locate_word(char **str, int *str_len, char c)
{
	int	i;

	*str += *str_len;
	*str_len = 0;
	i = 0;
	while (**str && **str == c)
		(*str)++;
	while (*(*str + i))
	{
		if (*(*str + i) == c)
			return ;
		(*str_len)++;
		i++;
	}
}

/* size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	res;

	res = ft_strlen(src);
	if (n == 0)
		return (res);
	i = 0;
	while (*src && (i < (n - 1)))
		*(dest + i++) = *src++;
	*(dest + i) = '\0';
	return (res);
} */

/* DESCRIPTION:
Allocates (with malloc(3)) and returns an array of strings obtained by
splitting ’s’ using the character ’c’ as a delimiter. The array must end
with a NULL pointer.

Turn in files: (none)
Parameters
	s: The string to be split.
	c: The delimiter character.
Return value:
	The array of new strings resulting from the split.
	NULL if the allocation fails.
External functs:
	malloc, free
---------------------------------------------------------------------------- */
char	**ft_split(const char *s, char c)
{
	char	**array;
	int		i;
	int		count;
	char	*str;
	int		word_len;

	if (s == NULL)
		return (NULL);
	count = ft_wc(s, c);
	array = (char **) malloc(sizeof(char *) * (count + 1));
	if (array == NULL)
		return (NULL);
	i = 0;
	str = (char *) s;
	word_len = 0;
	while (i < count)
	{
		ft_locate_word(&str, &word_len, c);
		*(array + i) = (char *) malloc((word_len + 1));
		if (*(array + i) == NULL)
			return (ft_free_array(array));
		ft_strlcpy(*(array + i++), str, word_len + 1);
	}
	*(array + i) = NULL;
	return (array);
}

/* int main(void)
{
    char **tab = ft_split("  tripouille, 42  ", ',');
    return (0);
}
 */

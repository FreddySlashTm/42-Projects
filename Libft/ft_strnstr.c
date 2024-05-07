/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcastan <alcastan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:58:03 by alcastan          #+#    #+#             */
/*   Updated: 2024/04/19 16:58:05 by alcastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// strnstr locates the first occurrence of the null-terminated
// string *needle into the string *haystack.
// Searches for len characters, not more.
// Characters that appears after a \0 are not searched.
// Returns a pointer to the occurrence.

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	if (needle[i] == '\0')
	{
		return ((char *) haystack);
	}
	while (haystack[i] != '\0' && i < len)
	{
		while (haystack[i + j] == needle[j] && haystack[i + j] != '\0'
			&& i + j < len)
		{
			j++;
			if (needle[j] == '\0')
			{
				return ((char *) haystack + i);
			}
		}
		i++;
		j = 0;
	}
	return (0);
}

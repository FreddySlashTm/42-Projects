/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcastan <alcastan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 17:21:50 by alcastan          #+#    #+#             */
/*   Updated: 2024/04/22 17:21:51 by alcastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// substr writes a string from a previous string *s
// using a pointer to its start and that is len bytes
// length.
// Returns a new string that is a substring from *s

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s + start, len + 1);
	return (ptr);
}

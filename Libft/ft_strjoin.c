/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcastan <alcastan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:18:29 by alcastan          #+#    #+#             */
/*   Updated: 2024/04/29 14:18:31 by alcastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// strjoin concatenates s1 to s2 first allocating
// enough memory for the two strings together.
// Then writes a null char at the end of the
// result string.

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	result_len;
	int		i;
	int		j;

	j = 0;
	i = 0;
	result_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = (char *)malloc(result_len * sizeof(char));
	if (!str)
		return (NULL);
	while (s1[i])
		str[j++] = s1[i++];
	i = 0;
	while (s2[i])
		str[j++] = s2[i++];
	str[j] = '\0';
	return (str);
}

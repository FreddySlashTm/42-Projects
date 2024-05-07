/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcastan <alcastan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:46:36 by alcastan          #+#    #+#             */
/*   Updated: 2024/04/22 16:46:38 by alcastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// strdup first allocates enough memory for a copy
// of s1, then does the copy and returns a pointer
// to the start of that copy.

char	*ft_strdup(const char *s1)
{
	char	*copy;
	size_t	i;

	copy = (char *)malloc(ft_strlen(s1) + 1);
	if (!copy)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

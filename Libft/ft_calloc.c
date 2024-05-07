/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcastan <alcastan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 15:57:31 by alcastan          #+#    #+#             */
/*   Updated: 2024/04/22 15:57:33 by alcastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// calloc asignates count spaces of memory with size size.
// Use it if you need to asignate memory for a new string
// for example. Calloc allocates any type of data and
// returns a pointer to the allocated memory.

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = malloc(count * size);
	if (!str)
		return (NULL);
	while (i < count * size)
		str[i++] = 0;
	return (str);
}

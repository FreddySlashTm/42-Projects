/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcastan <alcastan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 11:47:47 by alcastan          #+#    #+#             */
/*   Updated: 2024/04/12 11:47:48 by alcastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// strlcpy copies src into dest but being sure that
// there is not segmentation fault of buffer problems
// the original function uses restrict for not
// modify the content of the memory but the norm
// does not allow us to use it.

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize != 0)
		dst[i] = '\0';
	return (ft_strlen(src));
}

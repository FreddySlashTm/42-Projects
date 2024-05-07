/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcastan <alcastan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:51:08 by alcastan          #+#    #+#             */
/*   Updated: 2024/04/16 16:51:10 by alcastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

// strlcat concatenates two strings like strncat but 
// in a safer way. 

size_t	ft_strlcat(char *dst, const char *src, size_t dst_size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < dst_size)
		i++;
	while (src[j] && (i + j + 1) < dst_size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < dst_size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

/*
#include <stdio.h>
int	main(void)
{
	size_t	i;

	char src[] = "abcd";
	char dst[] = "efghgijkl";
	i = ft_strlcat(dst, src, 18);
	printf("El tamaño de la cadena es %zu\n", i);
	return (0);
}
*/

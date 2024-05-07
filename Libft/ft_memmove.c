/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcastan <alcastan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:52:06 by alcastan          #+#    #+#             */
/*   Updated: 2024/04/16 15:52:07 by alcastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

// memmove copies len bytes from src into dst but
// with the difference that can handle overlap
// between those strings.
// Returns dst after copy

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t					i;
	unsigned char			*dst_ptr;
	const unsigned char		*src_ptr;

	i = 0;
	src_ptr = (const unsigned char *)src;
	dst_ptr = (unsigned char *)dst;
	if (dst == (void *)0 && src == (void *)0)
		return (NULL);
	if (dst > src)
	{
		while (len-- > 0)
			dst_ptr[len] = src_ptr[len];
		return (dst);
	}
	while (i < len)
	{
		dst_ptr[i] = src_ptr[i];
		i++;
	}
	return (dst);
}

/*
#include <stdio.h>
int	main(void)
{
	char str[] = "abcde";
	char dst[] = "bcdef";
	ft_memmove(str, dst, 3);
	printf("%s\n", str);
}
*/

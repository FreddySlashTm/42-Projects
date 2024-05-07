/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcastan <alcastan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 14:07:12 by alcastan          #+#    #+#             */
/*   Updated: 2024/04/16 14:07:14 by alcastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

// memcpy copies n bytes of src on dst.
// Returns dst value after copy.

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned char		*s;

	if (src == (void *)0 && dst == (void *)0)
		return (dst);
	d = (unsigned char *) dst;
	s = (unsigned char *) src;
	while (n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dst);
}

/*
#include <stdio.h>
int	main(void)
{
	char src[] = "Hola me llamo Alfredo";
	char dest[] = "hhhhhhh";

	ft_memcpy(dest, src, 4);
	printf("Result: %s", dest);
}
*/

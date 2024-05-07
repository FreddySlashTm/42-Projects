/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcastan <alcastan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 10:57:38 by alcastan          #+#    #+#             */
/*   Updated: 2024/04/11 10:57:40 by alcastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// memset fills a memory block *b with an specific value (c) for
// len bytes.

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = b;
	while (i < len)
	{
		*ptr = (unsigned char)c;
		ptr++;
		i++;
	}
	return (b);
}

/*
#include <stdio.h>
int	main(void)
{
	char str[] = "Hola me llamo Alfredo";
	ft_memset(str, 'h', 13);
	printf("%s\n", str);
}
*/

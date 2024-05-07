/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcastan <alcastan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 10:48:13 by alcastan          #+#    #+#             */
/*   Updated: 2024/04/12 10:48:15 by alcastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// bzero fills n bytes with zeroes.
// if n is zero does nothing

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)s;
	if (n == 0)
		return ;
	while (i < n)
	{
		*ptr = 0;
		ptr++;
		i++;
	}
}

/*
#include <stdio.h>
int	main(void)
{
	char str[] = "Hola me llamo Alfredo";
	ft_bzero(str, 10);
	printf("%s\n", str);
	return (0);
}
*/

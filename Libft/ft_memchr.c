/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcastan <alcastan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:56:46 by alcastan          #+#    #+#             */
/*   Updated: 2024/04/19 15:56:47 by alcastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// memchr searches for a char c in the string s for n slots. 
// memchr returns a pointer to the first appareance of c.

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *) s;
	while (i < n)
	{
		if (*ptr == (unsigned char) c)
			return ((unsigned char *) ptr);
		ptr++;
		i++;
	}
	return (NULL);
}

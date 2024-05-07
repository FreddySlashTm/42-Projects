/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcastan <alcastan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 11:08:48 by alcastan          #+#    #+#             */
/*   Updated: 2024/04/10 11:08:50 by alcastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// strchr searches for a char (c) into a string *s and
// returns a pointer to its first appareance.

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%s", ft_strchr("Hola me llamo Alfredo", '\0'));
	return (0);
}
*/

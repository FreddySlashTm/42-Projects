/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcastan <alcastan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 09:29:23 by alcastan          #+#    #+#             */
/*   Updated: 2024/04/11 09:29:25 by alcastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// strrchr is like strchr but returns a pointer
// to the last ocurrence of c intro the string *s

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%s", ft_strrchr("Hola me llamo Alfredo", 'a'));
	return (0);
}
*/

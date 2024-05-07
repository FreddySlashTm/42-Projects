/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcastan <alcastan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:08:07 by alcastan          #+#    #+#             */
/*   Updated: 2024/04/29 15:08:09 by alcastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

//ft_set lo que hace es chequear si existe el char c en la string set.
//Nos va a servir para poder ir mirando en s1 si el char está en set.

static int	ft_set(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

// strtrim creates a new string trimming the giving *s1
// if strtrim finds any chars of the string *set given it will
// ignore them to create the new string.
// Returns a new string without *set chars
// - First creates a pointer *trim that will write the new string
// - Then creates a pointer to the start of *s1 called *start
// - Then creates a pointer to the end of *s1 called *end
// - If any of the strings has no data, returns NULL
// - Sets the pointers *start and *end were they belong
// (*end uses start + ft_strlen)
// - While *start points to something and ft_set finds
// the char (*start, set), start continues.
// - While *start < end and ft_set finds the char (*(end - 1), set)
// ends goes backwards
// - Now we write the new string *trim using ft_substr wich
// guaranties that the memory is allocated correctly.
// - substr will start writing in start and will end in end - start
// start is 0.
// - Returns the trimmed string.

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	char	*start;
	char	*end;

	if (!s1 || !set)
		return (0);
	start = (char *)s1;
	end = start + ft_strlen(s1);
	while (*start && ft_set(*start, set))
		start++;
	while (start < end && ft_set(*(end - 1), set))
		end--;
	trim = ft_substr(start, 0, end - start);
	return (trim);
}

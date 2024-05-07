/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcastan <alcastan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 09:18:50 by alcastan          #+#    #+#             */
/*   Updated: 2024/04/10 09:18:52 by alcastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// strlen return the len of a string str without
// the \0 char.
// size_t variables are unsigned ints destinated only
// for mesures.

size_t	ft_strlen(const char *str)
{
	size_t	i;	

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

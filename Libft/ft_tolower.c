/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcastan <alcastan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 11:02:04 by alcastan          #+#    #+#             */
/*   Updated: 2024/04/10 11:02:08 by alcastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// tolower transforms a char c into its lower
// if the char is lower or not alfabetic tolower does nothing.

int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
		return (c + 32);
	else
		return (c);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcastan <alcastan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:23:33 by alcastan          #+#    #+#             */
/*   Updated: 2024/04/09 12:23:34 by alcastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// isprint checks if the char given is printeable.

int	ft_isprint(int c)
{
	if ((c >= 32 && c <= 126))
		return (1);
	else
		return (0);
}

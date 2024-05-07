/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcastan <alcastan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 11:14:00 by alcastan          #+#    #+#             */
/*   Updated: 2024/04/09 11:14:01 by alcastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// isascii checks if the char c is into ascii list

int	ft_isascii(int c)
{
	if ((c < 0) || (c > 127))
		return (0);
	else
		return (1);
}

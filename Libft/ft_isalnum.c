/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcastan <alcastan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 11:00:07 by alcastan          #+#    #+#             */
/*   Updated: 2024/04/09 11:00:09 by alcastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// isalnum checks if the char given with int (c)
// is alphanumeric

int	ft_isalnum(int c)
{
	if ((c > 47 && c < 58) || (c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}

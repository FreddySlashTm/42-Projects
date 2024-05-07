/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcastan <alcastan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 10:44:14 by alcastan          #+#    #+#             */
/*   Updated: 2024/04/09 10:44:17 by alcastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// isdigit checks if the char given is a digit (0-9)

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcastan <alcastan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 10:23:44 by alcastan          #+#    #+#             */
/*   Updated: 2024/04/09 10:23:46 by alcastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// isalpha chekcs if the char given (char)c is alphabetic 

int	ft_isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}

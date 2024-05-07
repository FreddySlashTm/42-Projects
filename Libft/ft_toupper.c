/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcastan <alcastan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 10:49:20 by alcastan          #+#    #+#             */
/*   Updated: 2024/04/10 10:49:22 by alcastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// toupper transforms a char c into its Upper
// if the char is Upper of not alphabetic toupper does nothing.

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
		return (c - 32);
	else
		return (c);
}

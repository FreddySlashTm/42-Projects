/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcastan <alcastan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 15:10:17 by alcastan          #+#    #+#             */
/*   Updated: 2024/04/23 15:10:19 by alcastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// putchar_fd writes a char into opened file

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

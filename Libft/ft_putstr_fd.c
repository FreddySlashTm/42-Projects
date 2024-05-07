/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcastan <alcastan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 15:47:41 by alcastan          #+#    #+#             */
/*   Updated: 2024/04/23 15:47:44 by alcastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// putstr_fd writes a string into the openend file.

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

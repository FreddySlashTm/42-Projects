/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_variadic_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcastan <alcastan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:48:16 by alcastan          #+#    #+#             */
/*   Updated: 2024/05/14 15:48:18 by alcastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

int	ft_variadic_printf_test(char *str, ...)
{
	va_list	lista_de_args;
	char	arg_tipo_char;

	va_start(lista_de_args, last);
	while (*str)
		if (*str == '%')
		{
			str++;
			arg_tipo_char = va_arg(lista_de_args, char);
		}
	va_end(lista_de_args);
}

int	main(void)
{
	char	*str = "El siguiente arg es de tipo: %c";
	int		result;
	result = ft_variadic_printf_test(str);
	printf("%i", result);
}

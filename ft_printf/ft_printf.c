/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcastan <alcastan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 15:10:28 by alcastan          #+#    #+#             */
/*   Updated: 2024/05/08 15:10:30 by alcastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// Checks for wich char follows the % on the ft_printf function and does
// acts differently deppending on the char found. cspdiuxX%
static int	ft_check(va_list *va, const char *type, int i)
{
	int	result;

	result = 0;
	if (type[i] == 'c')
		result += ft_putcharf((char)va_arg(*va, int));
}

int	ft_printf(const char *str, ...)
{
	va_list	*va; //va_list points to an args list
	int		count; //how many chars does the printf have
	int		i; //counter

	count = 0;
	i = 0;
	va_start(va, str); //points at the start of va list
	while (*str)
	{
		if (str[i] == '%') //if there is a %
		{
			i++; //check for the next char
			count += ft_check(&va, str, i); //checks wich kind is and adds it to count
		}
		else
			count += ft_putcharf(str[i]); // if its not %, returns a char and writes it
		i++; // we keep looking
	}
	va_end(va); //va_end frees va from memory
	return(count);

}

int	main()
{
	char	c;

	c = 'A';
	ft_printf("Result: %c", c);
}
/*#include <stdio.h>

int	main()
{
	ft_printf("%u", 1250);
	printf("%u", 1250);
	return (0);
}*/
/*int	main()
{
	int	result;
	int result2;

	result = ft_printf("%x", 537);
	printf("%x", result);
	printf("\n");
	result2 = printf("%x", 537);
	printf("\n");
	printf("%X", result2);
	return (0);
}*/
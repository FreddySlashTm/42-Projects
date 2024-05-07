/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcastan <alcastan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 16:43:00 by alcastan          #+#    #+#             */
/*   Updated: 2024/05/02 16:43:02 by alcastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_n_len(int n)
{
	int	numchr;

	numchr = 0;
	if (n < 1)
		numchr++;
	while (n)
	{
		n /= 10;
		numchr++;
	}
	return (numchr);
}

static char	*ft_nbr_chr(size_t n)
{
	char	*buffer;

	buffer = (char *)malloc(sizeof(char) * (n + 1));
	if (!buffer)
		return (NULL);
	return (buffer);
}

static long long	ft_sign_check(long long n)
{
	long long	sign;

	sign = 1;
	if (n < 0)
		sign *= -n;
	else
		sign *= n;
	return (sign);
}

char	*ft_itoa(int n)
{
	char	*nstr;
	int		len;
	int		sign;

	sign = 0;
	if (n == -2147483648)
		return (nstr = ft_strdup("-2147483648"));
	if (n < 0)
		sign = 1;
	len = ft_n_len(n);
	nstr = ft_nbr_chr(len);
	if (!nstr)
		return (NULL);
	*(nstr + len) = '\0';
	n = ft_sign_check(n);
	while ((len--))
	{
		*(nstr + len) = 48 + (n % 10);
		n /= 10;
	}
	if (sign)
		*nstr = 45;
	return (nstr);
}

/*
#include <stdio.h>

int	main(void)
{
	long long	n;
	char		*nbr;

	n = -2147483648;
	nbr = ft_itoa(n);
	printf("%s", nbr);
	return (0);
}
*/

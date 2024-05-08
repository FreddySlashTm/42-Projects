/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcastan <alcastan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 16:46:24 by alcastan          #+#    #+#             */
/*   Updated: 2024/04/30 16:46:25 by alcastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_how_many_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static	int	ft_wordlen(char const *s, char c, int i)
{
	int	len;

	len = 0;
	while (s[i] && s[i] != c)
	{
		i++;
		len++;
	}
	return (len);
}

static void	ft_free_array(char **buffer, int is)
{
	while (is > 0)
	{
		is--;
		free(buffer[is]);
	}
	free (buffer);
}

char	**ft_split(char const *s, char c)
{
	char	**buffer;
	int		i;
	int		is;

	i = 0;
	is = -1;
	buffer = malloc(sizeof(char *) * (ft_how_many_words(s, c) + 1));
	if (!buffer)
		return (NULL);
	while (++is < ft_how_many_words(s, c))
	{
		while (s[i] == c)
			i++;
		buffer[is] = ft_substr(s, i, ft_wordlen(s, c, i));
		if (!(buffer[is]))
		{
			ft_free_array(buffer, is);
			return (0);
		}
		i += ft_wordlen(s, c, i);
	}
	buffer[is] = NULL;
	return (buffer);
}

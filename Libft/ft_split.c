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

// how many words cuenta la cantidad de palabras que van a salir
// de str dividiendolas con c
// word len cuenta el largo de cada palabra divida
// free array libera la lista creada cuando no queden
// más palabras por meter
// ft_split 
//
// ft_split recibe una string y un caracter para cortarla. 
// crearemos un **buffer que es una lista que va a almacenar
// las palabras ya divididas, un index para recorrer esta lista
// y controlar lo que vayamos escribiendo y un wordlen
// que básicamente almacenará el largo de cada palabra gracias
// a la función ft_wordlen
// Reservamos la memoria en la lista buffer con malloc usando
// el largo de todas las palabras que hayan en la string.
// Primero checkeamos que si no existe la lista retornamos NULL
// Ahora iteramos sobre el indice de la lista simpre que sea
// menor al número de palabras que buscamos, las cuales
// conocemos gracias a how many words.
// Tenemos un contador i que va a marcar el comienzo de 
// la palabra dentro de str.
// Chequeamos con un bucle si lo que hay delante de la palabra
// es el char que divide para avanzar hacia la palabara que buscamos
// Cuando llegamos asignamos un espacio a la palabra correspondiente
// dentro de buffer, usamos substr para sacar la palabra de la frase.
// Así con cada palabra que tengamos que sacar de la frase, el mismo proceso
// solo que le añadimos el largo de la palabra a i para
// que continúe en la siguiente.
// iteración por ahí.
// Si no hay más palabras para la lista se libera la memoria.
// Por último añadimos NULL al final de la lista y
// retornamos la lista.

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

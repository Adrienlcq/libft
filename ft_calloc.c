/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlecler <adlecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 17:40:27 by adlecler          #+#    #+#             */
/*   Updated: 2021/12/04 11:29:48 by adlecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** la fonction ft_calloc() alloue la mémoire nécessaire pour un tableau de
** count éléments de taille size octets, et renvoie un pointeur
** vers la mémoire allouée. Cette zone est remplie avec des zéros.
*/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*res;
	size_t	i;

	i = 0;
	if (count == 0 || size == 0)
		return (NULL);
	res = malloc(size * count);
	if (res == NULL)
		return (NULL);
	ft_bzero(res, count * size);
	return (res);
}

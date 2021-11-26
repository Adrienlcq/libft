/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlecler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 17:40:27 by adlecler          #+#    #+#             */
/*   Updated: 2021/11/25 19:08:15 by adlecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
	char	*res;
	size_t 	i;

	i = 0;
	if (count == 0 || size == 0)
		return (NULL);
	res = malloc(size * count);
	if (res == NULL)
		return (NULL);
	ft_bzero(res, count * size);
	return (res);
}

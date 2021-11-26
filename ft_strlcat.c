/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlecler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 15:51:42 by adlecler          #+#    #+#             */
/*   Updated: 2021/11/25 16:05:18 by adlecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	res;

	i = 0;
	j = 0;
	res = 0;
	while (dst[i])
		i++;
	while (src[res])
		res++;
	if (dstsize <= i)
		res = res + dstsize;
	else
		res = res + i;
	while (src[j] && (i + 1) < dstsize)
	{
			dst[i] = src[j];
			i++;
			j++;
	}
	dst[i] = '\0';
	return (res);	
}

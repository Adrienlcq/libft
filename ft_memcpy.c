/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlecler <adlecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 14:22:04 by adlecler          #+#    #+#             */
/*   Updated: 2021/12/02 14:42:03 by adlecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char	*bufferdst;
	char	*buffersrc;

	bufferdst = (char *)dst;
	buffersrc = (char *)src;
	while (n > 0)
	{
		bufferdst[n] = buffersrc[n];
		n--;
	}
	return (dst);
}

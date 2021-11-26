/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlecler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 14:53:46 by adlecler          #+#    #+#             */
/*   Updated: 2021/11/26 11:18:35 by adlecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*bufferdst;
	char	*buffersrc;
	size_t	i;

	bufferdst = (char *)dst;
	buffersrc = (char *)src;
	i = 0;
	if (bufferdst > buffersrc)
	{
		while (len > 0)
		{
			bufferdst[len] = buffersrc[len];
			len--;
		}
	}
	else
		while (i < len)
		{
			bufferdst[i] = buffersrc[i];
			i++;
		}
	return (dst);
}


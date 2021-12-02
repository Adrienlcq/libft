/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlecler <adlecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 14:53:46 by adlecler          #+#    #+#             */
/*   Updated: 2021/12/02 17:29:30 by adlecler         ###   ########.fr       */
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
	{
		while (i < len)
		{
			bufferdst[i] = buffersrc[i];
			i++;
		}
	}
	return (dst);
}

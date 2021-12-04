/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlecler <adlecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 14:22:04 by adlecler          #+#    #+#             */
/*   Updated: 2021/12/04 11:52:08 by adlecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** La fonction ft_memcpy() permet de copier un bloc de mémoire 
** (sans chevauchement) spécifié par le paramètre src, et dont 
** la taille est spécifiée via le paramètre n, dans un nouvel 
** emplacement désigné par le paramètre dst.
*/

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

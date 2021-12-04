/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlecler <adlecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:25:46 by adlecler          #+#    #+#             */
/*   Updated: 2021/12/04 11:26:28 by adlecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** La fonction ft_bzero() met à 0 (octets contenant « \0 ») les n
** premiers octets du bloc pointé par s.
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)s;
	if (n > 0)
	{
		while (str[i] && n != 0)
		{
			str[i] = '\0';
			i++;
			n--;
		}
	}
}

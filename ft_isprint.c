/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlecler <adlecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:56:14 by adlecler          #+#    #+#             */
/*   Updated: 2021/12/04 11:35:04 by adlecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** La fonction ft_isprint() vérifie s'il s'agit d'un caractère imprimable.
*/

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 127)
		return (1);
	return (0);
}

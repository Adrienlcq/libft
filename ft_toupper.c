/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlecler <adlecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:20:43 by adlecler          #+#    #+#             */
/*   Updated: 2021/12/04 12:33:24 by adlecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** La fonction ft_toupper() convertit la lettre c en majuscule si c'est possible.
*/

#include "libft.h"

int	ft_toupper(int c)
{
	int	i;

	i = 0;
	if (c >= 'a' && c <= 'z' )
		c -= 32;
	return (c);
}

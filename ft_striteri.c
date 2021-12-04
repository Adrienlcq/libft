/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlecler <adlecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 11:11:54 by adlecler          #+#    #+#             */
/*   Updated: 2021/12/04 12:12:34 by adlecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Applique la fonction f à chaque caractère de la
** chaîne de caractères transmise comme argument, et
** en passant son index comme premier argument. Chaque
** caractère est transmis par adresse à f pour être
** modifié si nécessaire.
*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}

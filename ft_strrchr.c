/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlecler <adlecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:27:48 by adlecler          #+#    #+#             */
/*   Updated: 2021/12/04 12:06:04 by adlecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** La fonction ft_strchr() renvoie un pointeur sur la dernière occurrence
** du caractère c dans la chaîne s.
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;

	str = (char *)s;
	i = 0;
	while (str[i] != '\0')
		i++;
	i--;
	if (str[i] == c)
		return (&str[i]);
	while (i >= 0)
	{
		if (str[i] == c)
			return (&str[i]);
		i--;
	}
	return (NULL);
}

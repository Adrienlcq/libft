/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlecler <adlecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 10:14:30 by adlecler          #+#    #+#             */
/*   Updated: 2021/12/04 12:31:51 by adlecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Alloue (avec malloc) et retourne une chaine de
** caractères issue de la chaine ’s’.
** Cette nouvelle chaine commence à l’index ’start’ et
** a pour taille maximale ’len’.
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	int		len_str;
	char	*str;
	int		i_start;

	i = 0;
	len_str = 0;
	while (i != start)
		i++;
	i_start = i;
	while (i++ <= len)
		len_str++;
	i = 0;
	str = (char *)malloc(sizeof(char) * (len_str) + 1);
	if (str == NULL)
		return (NULL);
	while (i < len)
	{
		str[i] = s[i_start];
		i++;
		i_start++;
	}
	str[i] = '\0';
	return (str);
}

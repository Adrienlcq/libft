/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlecler <adlecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:22:07 by adlecler          #+#    #+#             */
/*   Updated: 2021/12/10 19:04:35 by adlecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** La fonction ft_strchr() renvoie un pointeur sur la première occurrence
** du caractère c dans la chaîne s.
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	j;

	j = (char)c;
	printf("%c\n", c);
	if (!s)
		return (NULL);
	str = (char *)s;
	while (*str && *str != j)
		str++;
	if (*str == j)
		return (str);
	return (0);
}
/* int	main(void)
{
	printf("%s\n", ft_strchr("tripouille", 't' + 257));
	printf("--%s\n", strchr("tripouille", 't' + 257));

	printf("%s\n", ft_strchr("couoooooou", 'c'));
	return (0);
} */

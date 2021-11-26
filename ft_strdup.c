/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlecler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:43:23 by adlecler          #+#    #+#             */
/*   Updated: 2021/11/25 19:16:53 by adlecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
	int		i;
	char	*res;

	i = -1;
	while (s1[++i])
		;
	res = (char *)malloc(sizeof(char) * (i + 1));
	if (res == NULL)
		return (NULL);
	i = -1;
	while (s1[++i])
		res[i] = s1[i];
	res[i] = '\0';
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlecler <adlecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 10:14:30 by adlecler          #+#    #+#             */
/*   Updated: 2021/12/03 11:47:12 by adlecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

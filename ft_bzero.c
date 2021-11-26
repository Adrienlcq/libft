/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlecler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:25:46 by adlecler          #+#    #+#             */
/*   Updated: 2021/11/25 18:12:33 by adlecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int	i;
	char *str;

	i = 0;
	str = (char *)s;
	if (n > 0)
		while (str[i] && n != 0)
		{
			str[i] = '\0';
			i++;
			n--;
		}
}

int main()
{
	char str[] = "salut";
	ft_bzero(str, 4);
	printf("Valeur de str : %s\n", str);
	return (0);
}

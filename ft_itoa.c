/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlecler <adlecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 09:16:28 by adlecler          #+#    #+#             */
/*   Updated: 2021/12/04 10:15:31 by adlecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_get_size(long nbr)
{
	int	len;

	len = 0;
	if (nbr < 0)
	{
		len++;
		nbr = nbr * -1;
	}
	while (nbr > 0)
	{
		len ++;
		nbr = nbr / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	nb;
	char	*res;
	int		len;

	nb = n;
	len = ft_get_size(nb);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	res[len--] = '\0';
	if (nb == 0)
	{
		res[0] = 48;
		return (res);
	}
	if (nb < 0)
	{
		res[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0)
	{
		res[len--] = (nb % 10) + 48;
		nb = nb / 10;
	}
	return (res);
}

int	main(void)
{
	printf("%s\n", ft_itoa(-2147483648));
	return (0);
}

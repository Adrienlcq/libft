/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlecler <adlecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:14:19 by adlecler          #+#    #+#             */
/*   Updated: 2021/12/07 16:27:54 by adlecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*tmp;

	if (!new)
		return (NULL);
	if (!*alst)
		new->next = *alst;
	else
	{
		tmp = ft_lstlast(*alst);
		tmp->next = new;
	}
	new->next = NULL;
}

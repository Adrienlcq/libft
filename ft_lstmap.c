/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlecler <adlecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 17:43:46 by adlecler          #+#    #+#             */
/*   Updated: 2021/12/08 17:36:17 by adlecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*begin;
	t_list	*new;

	new = ft_lstnew(f(lst->content));
	if (!lst)
		return (NULL);
	if (new == NULL)
		return (NULL);
	begin = new;
	lst = lst->next;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (new == NULL)
		{
			ft_lstclear(&begin, (*del));
			break ;
		}
		lst = lst->next;
		ft_lstadd_back(&begin, new);
	}
	return (begin);
}

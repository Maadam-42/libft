/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maadam <maadam@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/05 20:49:18 by maadam            #+#    #+#             */
/*   Updated: 2020/06/05 20:49:18 by maadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n_list;
	t_list	*n_elem;

	if (!(lst))
		return (NULL);
	if (!(n_elem = ft_lstnew(f(lst->content))))
		return (NULL);
	n_list = n_elem;
	lst = lst->next;
	while (lst)
	{
		if (!(n_elem = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&n_list, del);
			ft_lstclear(&lst, del);
			break ;
		}
		ft_lstadd_back(&n_list, n_elem);
		lst = lst->next;
	}
	return (n_list);
}

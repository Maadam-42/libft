/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maadam <maadam@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/05 10:43:45 by maadam            #+#    #+#             */
/*   Updated: 2020/06/05 10:43:45 by maadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *list;

	if (!(*lst) || !(del))
		return ;
	while (*lst)
	{
		del((*lst)->content);
		list = *lst;
		*lst = list->next;
		free(list);
	}
	*lst = NULL;
}

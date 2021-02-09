/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maadam <maadam@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 23:19:41 by maadam            #+#    #+#             */
/*   Updated: 2020/06/04 23:19:41 by maadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *list;

	if (!(new))
		return ;
	if (!(*lst))
		*lst = new;
	else
	{
		list = ft_lstlast(*lst);
		list->next = new;
	}
}

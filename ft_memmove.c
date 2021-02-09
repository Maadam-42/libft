/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maadam <maadam@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 19:46:40 by maadam            #+#    #+#             */
/*   Updated: 2020/05/13 19:46:40 by maadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Проверяем не стоят ли копируемые байты раньше места, куда копируем.
** В данном случае копировать начинаем с конца, чтобы избежать перекрытия
** при этом сразу минусим size.
** В ином случае копируем слева направо
*/

void	*ft_memmove(void *str1, const void *str2, size_t size)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	if (!(str1) && !(str2))
		return (NULL);
	ptr1 = (unsigned char *)str1;
	ptr2 = (unsigned char *)str2;
	i = 0;
	if (ptr2 < ptr1)
	{
		while (size-- > 0)
			ptr1[size] = ptr2[size];
	}
	else
	{
		while (i < size)
		{
			ptr1[i] = ptr2[i];
			i++;
		}
	}
	return (str1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maadam <maadam@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 17:27:56 by maadam            #+#    #+#             */
/*   Updated: 2020/05/14 17:27:56 by maadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** По мануалу приводим в беззнаковый тип
** Возвращаем так же с приведением, т.к. указываем на конкретный байт
*/

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}

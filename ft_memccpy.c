/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maadam <maadam@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 20:33:22 by maadam            #+#    #+#             */
/*   Updated: 2020/05/12 20:33:22 by maadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *str1, const void *str2, int c, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	ptr1 = (unsigned char *)str1;
	ptr2 = (unsigned char *)str2;
	i = 0;
	if (str1 == str2 && n == 0)
		return (str1);
	while (i < n)
	{
		ptr1[i] = ptr2[i];
		if ((unsigned char)ptr2[i] == (unsigned char)c)
			return ((unsigned char *)ptr1 + i + 1);
		i++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maadam <maadam@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 18:59:26 by maadam            #+#    #+#             */
/*   Updated: 2020/05/05 18:59:26 by maadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *str1, const char *str2, size_t size)
{
	size_t total;
	size_t i;

	if (!(str1))
		return (0);
	total = ft_strlen(str2);
	if (!(size))
		return (total);
	i = 0;
	while (*str2 && i < size - 1)
	{
		*str1++ = *str2++;
		i++;
	}
	*str1 = '\0';
	return (total);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maadam <maadam@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 18:23:52 by maadam            #+#    #+#             */
/*   Updated: 2020/05/03 18:23:52 by maadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *str1, const char *str2, size_t size)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	if (size <= ft_strlen(str1))
		return (size + ft_strlen(str2));
	while (str1[i] != '\0' && i < size)
		i++;
	while ((str2[k] != '\0') && ((i + k + 1) < size))
	{
		str1[i + k] = str2[k];
		k++;
	}
	if (i != size)
		str1[i + k] = '\0';
	return (i + ft_strlen(str2));
}

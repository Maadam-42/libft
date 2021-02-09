/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maadam <maadam@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 21:00:28 by maadam            #+#    #+#             */
/*   Updated: 2020/05/15 21:00:28 by maadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = (char *)malloc((ft_strlen(str) + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (*(str + i))
	{
		*(ptr + i) = *(str + i);
		i++;
	}
	*(ptr + i) = '\0';
	return (ptr);
}

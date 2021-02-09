/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maadam <maadam@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 23:25:47 by maadam            #+#    #+#             */
/*   Updated: 2020/05/15 23:25:47 by maadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Проверка на наличие строк. Если есть только одна, ее и возвращаем
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	i;
	size_t	k;

	if (!(s1) && !(s2))
		return (NULL);
	else if (!(s1) || !(s2))
		return (!(s1) ? ft_strdup(s2) : ft_strdup(s1));
	ptr = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	i = -1;
	while (*(s1 + ++i) != '\0')
	{
		*(ptr + i) = *(s1 + i);
	}
	k = 0;
	while (*(s2 + k) != '\0')
	{
		*(ptr + i) = *(s2 + k);
		i++;
		k++;
	}
	*(ptr + i) = '\0';
	return (ptr);
}

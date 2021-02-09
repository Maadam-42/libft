/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maadam <maadam@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 23:22:43 by maadam            #+#    #+#             */
/*   Updated: 2020/05/16 23:22:43 by maadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Поиск символа из s1 в строке set -> Если найдет, то проверяем следующий
** Если не найдет, то выходит из цикла -> возвращаем позицию старта печати
*/

static	size_t	ft_start_print(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(s1);
	i = 0;
	while (i < len)
	{
		if (ft_strchr(set, s1[i]) == 0)
			break ;
		i++;
	}
	return (i);
}

static	size_t	ft_finish_print(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;

	len = (ft_strlen(s1));
	i = 0;
	while (i < len)
	{
		if (ft_strchr(set, s1[len - 1 - i]) == 0)
			break ;
		i++;
	}
	return (len - i);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	start_print;
	size_t	fin_print;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	start_print = ft_start_print(s1, set);
	fin_print = ft_finish_print(s1, set);
	if (start_print > fin_print)
		return (ft_strdup(""));
	ptr = (char *)malloc((fin_print - start_print + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, s1 + start_print, fin_print - start_print + 1);
	return (ptr);
}

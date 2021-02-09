/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maadam <maadam@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 00:31:51 by maadam            #+#    #+#             */
/*   Updated: 2020/05/06 00:31:51 by maadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Если str2 пустая - возвращаем указатель на str1.
** Далее проводим проверку совпадений str2 в str1, шагая по str1
** При первом совпадении начинаем шагать так же по str2.
** Если совп не дошли до конца str2, то счетчик str2  обнуляется в осн цикле
** чтобы проверять str2 сначала.
** Во всех иных случаях возвращаем NULL по мануалу.
*/

char	*ft_strnstr(const char *str1, const char *str2, size_t size)
{
	size_t i;
	size_t j;

	if (str2[0] == '\0')
		return ((char *)str1);
	i = 0;
	while (i < size && str1[i] != '\0')
	{
		j = 0;
		while (i + j < size && str2[j] != '\0' && str1[i + j] == str2[j])
			j++;
		if (str2[j] == '\0')
			return ((char *)str1 + i);
		i++;
	}
	return (NULL);
}
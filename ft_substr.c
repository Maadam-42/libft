/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maadam <maadam@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 21:31:01 by maadam            #+#    #+#             */
/*   Updated: 2020/05/15 21:31:01 by maadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (!(s))
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s[start] != '\0' && i < len)
	{
		*(str + i) = *(s + start);
		i++;
		start++;
	}
	*(str + i) = '\0';
	return (str);
}

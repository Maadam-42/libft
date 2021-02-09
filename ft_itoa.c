/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maadam <maadam@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 20:35:12 by maadam            #+#    #+#             */
/*   Updated: 2020/05/17 20:35:12 by maadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_strcpy(char *str1, char *str2)
{
	char	*ptr;

	ptr = str1;
	while (*str2)
		*str1++ = *str2++;
	*str1 = '\0';
	return (ptr);
}

static	int		ft_len(int n)
{
	int		len;

	len = 0;
	if (n == 0)
		return (len = 1);
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	int		num;
	int		len;
	int		i;
	char	*str;

	num = (n < 0) ? -n : n;
	i = 0;
	len = ft_len(num);
	if (!(str = (char *)malloc((len + 1 + (n < 0 ? 1 : 0) * sizeof(char)))))
		return (NULL);
	if (n == -2147483648)
		return (str = ft_strcpy(str, "-2147483648"));
	if (n < 0 && (str[0] = '-'))
		len++;
	i = len - 1;
	while (num >= 10)
	{
		str[i] = (char)(num % 10 + '0');
		num /= 10;
		i--;
	}
	str[i] = (char)(num % 10 + '0');
	str[len] = '\0';
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maadam <maadam@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 13:37:46 by maadam            #+#    #+#             */
/*   Updated: 2020/05/17 13:37:46 by maadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	**ft_nomem(char **arr_words, size_t w)
{
	size_t	i;

	i = 0;
	while (i <= w)
	{
		free(arr_words[i]);
		i++;
	}
	free(arr_words);
	return (NULL);
}

/*
** Определения количества слов. Проходимся до конца строки, если попадается
** разделитель, то идем дальше до отличного символа. Если такой есть, то
** счетчик слов +1. Далее ищем разделитель или конец строки / повторяем цикл
*/

static	size_t	ft_words(char const *s, char c)
{
	size_t	i;
	size_t	total;

	i = 0;
	total = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0' && s[i] != c)
			total++;
		while (s[i] != '\0' && s[i] != c)
			i++;
	}
	return (total);
}

/*
** Функция копирования слов по аналогии с strdup, но учитывает количество
** копируемых элементов. Копируем с помощью strncpy
*/

static	char	*ft_strduplen(char const *s, size_t n)
{
	char	*str;
	size_t	i;

	if (!(str = (char *)malloc((n + 1) * sizeof(char))))
		return (NULL);
	i = 0;
	while (s[i] != '\0' && i < n)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
** Для определения размеза массива используем статическую функцию поиска слов.
** Строки (слова) копируем в элементы массива через поиск разделителей,
** тем самым находя начало слова (индекс, с которого начинаем копировать) +
** понимая длину слова через разницу (общая длина - индекс старта)
*/

static	char	**ft_arr_make(char **arr_words, char const *s, char c)
{
	size_t	i;
	size_t	start;
	size_t	w;

	i = 0;
	w = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (start < i)
		{
			arr_words[w] = ft_strduplen(s + start, i - start);
			if (arr_words[w] == NULL)
				ft_nomem(arr_words, w);
			w++;
		}
	}
	arr_words[w] = NULL;
	return (arr_words);
}

char			**ft_split(char const *s, char c)
{
	char	**arr_words;

	if (!(s))
		return (NULL);
	if (!(arr_words = (char **)malloc((ft_words(s, c) + 1) * sizeof(char *))))
		return (NULL);
	return (ft_arr_make(arr_words, s, c));
}

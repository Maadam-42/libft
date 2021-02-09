/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maadam <maadam@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 01:09:30 by maadam            #+#    #+#             */
/*   Updated: 2020/05/15 01:09:30 by maadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	char *ptr;

	ptr = (char *)malloc(n * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, n * size);
	return ((void *)ptr);
}

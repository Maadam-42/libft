/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maadam <maadam@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 17:11:16 by maadam            #+#    #+#             */
/*   Updated: 2020/05/07 17:11:16 by maadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_tolower(int ch)
{
	if (ch >= 65 && ch <= 90)
		return (ch + 32);
	else
		return (ch);
}

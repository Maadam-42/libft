/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maadam <maadam@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 16:57:57 by maadam            #+#    #+#             */
/*   Updated: 2020/05/07 16:57:57 by maadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_toupper(int ch)
{
	if (ch >= 97 && ch <= 122)
		return (ch - 32);
	else
		return (ch);
}

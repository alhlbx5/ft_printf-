/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:36:09 by aalhalab          #+#    #+#             */
/*   Updated: 2024/01/23 17:45:32 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_s(va_list list, int *count)
{
	char	*x;

	x = va_arg(list, char *);
	if (!x)
		x = "(null)";
	while (*x)
	{
		*count += write(1, x, 1);
		x++;
	}
	return (0);
}

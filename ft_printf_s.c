/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:36:09 by aalhalab          #+#    #+#             */
/*   Updated: 2024/01/21 16:16:10 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf_s(va_list list)
{
	int count;
	char *x = va_arg(list, char *);
	
	count = 0;
	while (*x)
	{
		count += write(1, x, 1);
		x++;
	}
	return count;
}

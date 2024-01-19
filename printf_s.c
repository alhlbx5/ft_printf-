/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:36:09 by aalhalab          #+#    #+#             */
/*   Updated: 2024/01/16 11:36:32 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void printf_s(va_list list)
{
	char *x = va_arg(list, char *);
	
	while (*x)
	{
		write(1, x, 1);
		x++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_c.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:33:58 by aalhalab          #+#    #+#             */
/*   Updated: 2024/01/18 15:47:31 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void printf_c(va_list list)
{
	int count;
	
	count = 0;
	char x = va_arg(list, int);
	count += write(1, &x, 1);
	return count;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 04:06:04 by aalhalab          #+#    #+#             */
/*   Updated: 2024/01/18 15:48:58 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	read_case(char	*c, va_list list)
{
		int count;
		
		count = 0;
			if (*c == 'c')
			printf_c(list);
			else if (*c == 's')
			printf_s(list);
			else if (*c == 'd')
			printf_d(list);
			else if (*c == 'u')	
			printf_u(list);
			else if (*c == 'p')
			printf_p(list);
			else if (*c == 'x')
			printf_x(list);
			else if (*c == 'X')
			printf_x_upper(list);
			else if (*c == '%')
			count += write(1, "%", 1);
			else
			write(1, "error\n", 6);
}
int ft_printf(const char *c, ...)
{
	va_list	list;
	va_start(list, c);
	
	while (*c)
	{
		if (*c	 == '%')
		{
			c++;
			read_case((char *)c, list);
		}
		else
			write(1, c, 1);
		c++;
		count++;
	}
	va_end(list);
	return (count);
}

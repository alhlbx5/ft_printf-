/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 04:06:04 by aalhalab          #+#    #+#             */
/*   Updated: 2024/01/13 16:00:34 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void execute_char(va_list list)
{
	char x = va_arg(list, int);
	write(1, &x, 1);
}
void execute_string(va_list list)
{
	char *x = va_arg(list, char *);
	
	while (*x)
	{
		write(1, x, 1);
		x++;
	}
}
void execute_percent(void)
{
	write(1, "%", 1);
}	
void	read_case(char	*c, va_list list)
{
			if (*c == 'c')
			execute_char(list);
			else if (*c == 's')
			execute_string(list);
			else if (*c == 'd')
			execute_int(list);
			else if (*c == 'u')
			execute_unsigned_int(list);
			else if (*c == 'p')
			execute_pointer(list);
			else if (*c == 'x')
			execute_hex(list);
			else if (*c == 'X')
			execute_hex_upper(list);
			else if (*c == '%')
			execute_percent();
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
	}
	va_end(list);
	return 0;
}

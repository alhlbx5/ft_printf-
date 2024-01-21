/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 04:06:04 by aalhalab          #+#    #+#             */
/*   Updated: 2024/01/21 16:38:09 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	read_case(const char *c, va_list list)
{
		int count;
		
		count = 0;
			if (*c == 'c')
			count += ft_printf_c(list);
			else if (*c == 's')
			count += ft_printf_s(list);
			else if (*c == 'p')
			count += ft_printf_p(list);
			else if (*c == 'd' || *c == 'i')
			count += ft_printf_d(list);
			else if (*c == 'u')
			count += ft_printf_u(list);
			else if (*c == 'x')
			count += printf_x(list);
			else if (*c == 'X')
			count += printf_x_upper(list);
			else if (*c == '%')
			count += write(1, "%", 1);
			else
			write(1, "error\n", 6);
			return (count);
}
int ft_printf(const char *c, ...)
{
	va_list	list;
	va_start(list, c);
	int count;

	count = 0;
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
int main()
{
	ft_printf("hello %c %s %p %d %i %u %x %X %%\n", 'a', "hello", "hello", 123, 123, 123, 123, 123);
	printf("hello %c %s %p %d %i %u %x %X %%\n", 'a', "hello", "hello", 123, 123, 123, 123, 123);
	
	ft_printf("%d\n",ft_printf("%s", "hello")); 
	printf("%d\n",printf("%s", "hello"));
	return 0;
}
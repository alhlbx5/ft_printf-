/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 04:06:04 by aalhalab          #+#    #+#             */
/*   Updated: 2023/12/07 19:08:40 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ft_printf.h"

void ft_putnbr_hex(unsigned long long n)
{
	char *hex;
	
	hex =  "0123456789abcdef";
	if (n >= 16)
	{
		ft_putnbr_hex(n / 16);
		ft_putnbr_hex(n % 16);
	}
	else
		write(1, &hex[n], 1);
}
void ft_putnbr_hex_upper(unsigned long long n)
{
	char *hex;
	
	hex =  "0123456789ABCDEF";
	if (n >= 16)
	{
		ft_putnbr_hex_upper(n / 16);
		ft_putnbr_hex_upper(n % 16);
	}
	else
		write(1, &hex[n], 1);
}
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
void execute_int(va_list list)
{
	int x = va_arg(list, int);
	ft_putnbr_fd(x, 1);
}
void execute_unsigned_int(va_list list)
{
	unsigned int x = va_arg(list, unsigned int);
	ft_putnbr_fd(x, 1);
}
void execute_pointer(va_list list)
{
	unsigned long x = (unsigned long)va_arg(list, void *);
	write(1, "0x", 2);
	ft_putnbr_hex(x);
}
void execute_hex(va_list list)
{
	unsigned int x = va_arg(list, unsigned int);
	ft_putnbr_hex(x);
}

void execute_hex_upper(va_list list)
{
	unsigned int x = va_arg(list, unsigned int);
	ft_putnbr_hex_upper(x);
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
			// char case
			read_case((char *)c, list);
		}
		else
			write(1, c, 1);
		c++;
	}
	va_end(list);
	return 0;
}

// int main() 
// {
// 	// char *str = "hello";
// 	// int x = 55;

// 	// char s[10] = "%d\n";

// 	// s[1] = 'd';

// 	mini_printf("%d\n", "hello");


// 	// void *p;
// 	// p = va_arg(ap, void *);

// 	// printf("%d\n", str);
// 	// printf("%d\n", (void *)&x);
// }

// // 4323786650
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 04:06:04 by aalhalab          #+#    #+#             */
/*   Updated: 2024/01/23 17:40:29 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	read_case(const char *c, va_list list, int *count)
{
	if (*c == 'c')
		ft_printf_c(list, count);
	else if (*c == 's')
		ft_printf_s(list, count);
	else if (*c == 'p')
		ft_printf_p(list, count);
	else if (*c == 'd' || *c == 'i')
		ft_printf_d(list, count);
	else if (*c == 'u')
		ft_printf_u(list, count);
	else if (*c == 'x')
		ft_printf_x(list, count);
	else if (*c == 'X')
		ft_printf_x_upper(list, count);
	else if (*c == '%')
		*count += write(1, "%", 1);
	return (0);
}

int	ft_printf(const char *c, ...)
{
	va_list	list;
	int		count;

	va_start(list, c);
	count = 0;
	while (*c)
	{
		if (*c == '%')
		{
			c++;
			read_case((char *)c, list, &count);
		}
		else
			count += write(1, c, 1);
		c++;
	}
	va_end(list);
	return (count);
}
// int main()
// {
// 	ft_printf("%d\n",ft_printf("%x\n", 12314));
// 	printf("%d\n",printf("%x\n", 12314));
// 	return 0;
// }
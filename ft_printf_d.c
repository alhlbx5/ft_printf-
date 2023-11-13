/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:35:04 by aalhalab          #+#    #+#             */
/*   Updated: 2023/11/13 17:35:42 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
void	ft_putnbr_fd(int n, int fd)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		if (n == -2147483648)
		{
			i = 1;
			n++;
		}
		n = -n;
	}
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd(n % 10 + '0' + i, fd);
}
void	ft_printf_d(int	c)
{
	ft_putnbr_fd(c, 1);
}
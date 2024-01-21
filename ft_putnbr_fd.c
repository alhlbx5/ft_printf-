/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:50:06 by aalhalab          #+#    #+#             */
/*   Updated: 2024/01/20 17:17:23 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr_fd(int	n, int	fd)
{
	int	count;
	count = 0;
	if (n > 9)
	{
		count = ft_putnbr_fd(n / 10, fd);
		count += ft_putnbr_fd(n % 10, fd);
	}
	else if (n < 0)
	{
		count = 0;
		n = n * -1;
		count += write (1, "-", fd);
		count += ft_putnbr_fd(n, fd);
	}
	else
	if (n <= 9 && n >= 0)
	{
		n = n + 48;
		count += write (1, &n, fd);
	}
	return (count);
}

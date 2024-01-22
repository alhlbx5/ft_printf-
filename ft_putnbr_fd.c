/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:50:06 by aalhalab          #+#    #+#             */
/*   Updated: 2024/01/22 20:57:43 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr_fd(long long int	n, int	fd, int *count)
{
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd, count);
		ft_putnbr_fd(n % 10, fd, count);
	}
	else if (n < 0)
	{
		n = n * -1;
		*count += write (1, "-", fd);
		ft_putnbr_fd(n, fd, count);
	}
	else
	if (n <= 9 && n >= 0)
	{
		n = n + 48;
		*count += write (1, &n, fd);
	}
	return (0);
}

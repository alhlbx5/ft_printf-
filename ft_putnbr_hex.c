/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:47:57 by aalhalab          #+#    #+#             */
/*   Updated: 2024/01/23 17:35:28 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hex(unsigned long long n, int *count)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (n >= 16)
	{
		ft_putnbr_hex(n / 16, count);
		ft_putnbr_hex(n % 16, count);
	}
	else
		*count += write(1, &hex[n], 1);
	return (0);
}

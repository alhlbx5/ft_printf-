/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:38:55 by aalhalab          #+#    #+#             */
/*   Updated: 2024/01/21 16:16:14 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_u(va_list list)
{
	unsigned int x = va_arg(list, unsigned int);
	return (ft_putnbr_fd(x, 1));
}

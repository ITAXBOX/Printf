/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitawi <aitawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 18:29:54 by aitawi            #+#    #+#             */
/*   Updated: 2025/05/27 16:36:32 by aitawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_int(int n)
{
	ft_putnbr_fd(n, 1);
	return (ft_num_size(n));
}

int	ft_print_string(char *str)
{
	if (!str)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}

int	ft_putptr(uintptr_t ptr)
{
	int	len;

	len = 0;
	if (ptr >= 16)
		len += ft_putptr(ptr / 16);
	len += (ft_putchar_fd(HEX_LOW[ptr % 16], 1), 1);
	return (len);
}

int	ft_print_pointer(void *ptr)
{
	int	len;

	len = 0;
	if (!ptr)
		return (ft_putstr_fd("(nil)", 1), 5);
	len += write(1, "0x", 2);
	len += ft_putptr((uintptr_t)ptr);
	return (len);
}

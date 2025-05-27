/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitawi <aitawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 15:27:33 by aitawi            #+#    #+#             */
/*   Updated: 2025/05/27 16:37:09 by aitawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>
# include "libft/libft.h"

# define HEX_LOW "0123456789abcdef"
# define HEX_UPP "0123456789ABCDEF"

int	ft_print(va_list args, char c);
int	ft_printf(const char *str, ...);

int	ft_print_int(int n);
int	ft_print_string(char *str);
int	ft_putptr(uintptr_t ptr);
int	ft_print_pointer(void *ptr);

int	ft_check_conversion(char c);
int	ft_num_size(int n);
int	ft_putnmbr_hexa(unsigned int nbr, char *base);
int	ft_putnbr_unsigned(unsigned int n);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:51:41 by smuhamma          #+#    #+#             */
/*   Updated: 2023/01/29 13:33:37 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(unsigned long n)
{
	int		len;
	char	*s;

	s = "0123456789abcdef";
	len = 0;
	if (n > 15)
		len += ft_print_pointer(n / 16);
	len += ft_putchar(s[n % 16]);
	return (len);
}

int	print_pointer(unsigned long n)
{
	int	len;

	len = ft_putstr("0x");
	if (n == 0)
		len += ft_putchar('0');
	else
		len += ft_print_pointer(n);
	return (len);
}

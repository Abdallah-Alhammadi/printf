/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexacap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:29:05 by smuhamma          #+#    #+#             */
/*   Updated: 2023/01/29 13:33:31 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hexacap(unsigned int n)
{
	int		len;
	char	*s;

	len = 0;
	s = "0123456789ABCDEF";
	if (n > 15)
		len += print_hexacap(n / 16);
	len += ft_putchar(s[n % 16]);
	return (len);
}

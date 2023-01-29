/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexalow.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:30:24 by smuhamma          #+#    #+#             */
/*   Updated: 2023/01/29 13:33:33 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hexalow(unsigned int n)
{
	int		len;
	char	*s;

	len = 0;
	s = "0123456789abcdef";
	if (n > 15)
		len += print_hexalow(n / 16);
	len += ft_putchar(s[n % 16]);
	return (len);
}

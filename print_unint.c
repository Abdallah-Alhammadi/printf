/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:31:54 by smuhamma          #+#    #+#             */
/*   Updated: 2023/01/29 13:33:39 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_unint(unsigned int n)
{
	int	len;

	len = 0;
	if (n > 9)
		len += print_unint(n / 10);
	len += ft_putchar((n % 10) + '0');
	return (len);
}

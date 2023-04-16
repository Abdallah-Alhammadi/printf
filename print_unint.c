/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 13:48:02 by abalhamm          #+#    #+#             */
/*   Updated: 2023/01/29 13:48:03 by abalhamm         ###   ########.fr       */
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

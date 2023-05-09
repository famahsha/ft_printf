/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 15:56:00 by Famahsha          #+#    #+#             */
/*   Updated: 2023/01/31 17:56:39 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_pointer(unsigned long num)
{
	int	len;

	len = 0;
	if (num >= 16)
		len += print_pointer(num / 16);
	len += print_char(LOWER_HEX[num % 16]);
	return (len);
}

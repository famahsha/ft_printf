/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsignnbr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 15:57:04 by Famahsha          #+#    #+#             */
/*   Updated: 2023/01/31 18:04:31 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_unsignnbr(unsigned int nbr)
{
	int	len;

	len = 0;
	if (nbr > 9)
		len += print_unsignnbr(nbr / 10);
	len += print_char(LOWER_HEX[nbr % 10]);
	return (len);
}

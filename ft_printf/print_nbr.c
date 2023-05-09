/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 15:56:36 by Famahsha          #+#    #+#             */
/*   Updated: 2023/01/31 18:49:53 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_nbr(long long int nbr)
{
	char	*digit;
	int		len;

	len = 0;
	digit = "0123456789";
	if (nbr < 0)
	{
		len += print_char('-');
		nbr *= -1;
	}
	if (nbr >= 10)
		len += print_nbr(nbr / 10);
	len += print_char(digit[nbr % 10]);
	return (len);
}

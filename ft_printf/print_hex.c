/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 17:08:40 by Famahsha          #+#    #+#             */
/*   Updated: 2023/01/31 18:49:11 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

int	print_hex(unsigned int nbr, char *hex)
{
	int	len;

	len = 0;
	if (nbr >= 16)
		len += print_hex(nbr / 16, hex);
	len += print_char(hex[nbr % 16]);
	return (len);
}

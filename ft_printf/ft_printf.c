/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 14:52:46 by Famahsha          #+#    #+#             */
/*   Updated: 2023/01/31 19:13:41 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_type(va_list args, char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += print_char(va_arg(args, int));
	else if (format == 's')
		len += print_str((va_arg(args, char *)));
	else if (format == 'p')
	{
		len += print_str("0x");
		len += print_pointer(va_arg(args, unsigned long));
	}
	else if (format == 'd' || format == 'i')
		len += print_nbr((long long int)va_arg(args, int));
	else if (format == 'u')
		len += print_unsignnbr(va_arg(args, unsigned int));
	else if (format == 'x')
		len += print_hex(va_arg(args, unsigned int), LOWER_HEX);
	else if (format == 'X')
		len += print_hex(va_arg(args, unsigned int), UPPER_HEX);
	return (len);
}

int	ft_printf(const char	*format, ...)
{
	va_list	args;
	int		len;

	len = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
				len += write(1, "%", 1);
			else
				len += check_type(args, *format);
		}
		else
			len += write(1, format, 1);
		format++;
	}
	va_end(args);
	return (len);
}

// int main()
// {
// 	int len = 0;
// 	int len2 = 0;

// 	len = ft_printf("%s\n", "\0");
// 	len2 = printf("%s\n", "\0");

// 	// len = ft_printf("%p\n", &len);
// 	// len2 = printf("%p\n", &len);

// 	// len = ft_printf("%u\n", 100);
// 	// len2 = printf("%u\n", 100);
// 	printf("len: %d, len2 = %d\n",len, len2);
// }

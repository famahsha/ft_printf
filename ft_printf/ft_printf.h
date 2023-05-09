/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 16:46:41 by Famahsha          #+#    #+#             */
/*   Updated: 2023/01/31 18:07:23 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

# define LOWER_HEX "0123456789abcdef"
# define UPPER_HEX "0123456789ABCDEF"

int		ft_printf(const char *format, ...);
int		print_char(char c);
int		print_nbr(long long int nbr);
int		print_pointer(unsigned long num);
int		print_str(char *str);
int		print_unsignnbr(unsigned int nbr);
int		print_hex(unsigned int nbr, char *hex);

#endif

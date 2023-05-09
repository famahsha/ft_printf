# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/30 17:15:20 by Famahsha          #+#    #+#              #
#    Updated: 2023/01/31 18:00:24 by Famahsha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME :=	libftprintf.a

.PHONY: all clean fclean re

CFLAGS := -Wall -Wextra -Werror

SRCS := \
		print_char.c print_nbr.c print_pointer.c \
        print_str.c print_unsignnbr.c print_hex.c ft_printf.c\

OBJS := $(SRCS:.c=.o)

$(NAME) : $(OBJS)
			ar -rcs $(NAME) $(OBJS)

fclean : clean
		rm -f $(NAME)

clean : 
		rm -f $(OBJS)

re:     fclean all

all : $(NAME)

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/29 01:03:16 by abalhamm          #+#    #+#              #
#    Updated: 2023/01/29 13:33:27 by abalhamm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a

SRCS =	ft_putchar.c ft_putstr.c ft_putnbr.c ft_printf.c\
		print_hexacap.c print_hexalow.c print_pointer.c print_unint.c\
		ft_printf.c

OBJS = $(SRCS:.c=.o)

CC = gcc

RM = rm -f

CFLAGS = -Wall -Werror -Wextra

$(NAME): $(OBJS)
	@ar -rcs $(NAME) $(OBJS)

all: ${NAME}

clean:
	@$(RM) $(OBJS) 

fclean: clean
	@$(RM) $(NAME)

re: fclean all




# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aleclet <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/19 11:05:13 by aleclet           #+#    #+#              #
#    Updated: 2016/12/03 12:13:04 by aleclet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Werror -Wall -Wextra

INC = includes/

OBJS = 	ft_putchar.o\
		ft_putstr.o\
		ft_strcmp.o\
		ft_strlen.o\
		ft_swap.o

%.o: srcs/%.c
	$(CC) -c -o $@ $< -I $(INC) $(CFLAGS)

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $?
	ranlib $(NAME)


clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

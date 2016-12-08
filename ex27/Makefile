# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aleclet <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/19 11:05:13 by aleclet           #+#    #+#              #
#    Updated: 2016/11/21 16:56:56 by aleclet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

EXEC = ft_display_file

SRC = main.c\
	  ft_display_file.c

OBJ = ft_display_file.o\
	  main.o

CFLAGS = -Werror -Wall -Wextra

all: $(EXEC)

$(EXEC): 
	$(CC) $(CFLAGS) -o$(EXEC) $(SRC)
clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(EXEC)

re: fclean all

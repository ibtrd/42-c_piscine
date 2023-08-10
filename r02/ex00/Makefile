# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emenu <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/22 15:07:21 by emenu             #+#    #+#              #
#    Updated: 2023/07/23 23:10:24 by ibjean-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
EXEC = rush-02
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror

all: $(EXEC)
	rm -rf *.o && chmod 777 rush-02

clean:
	rm -rf *.o

fclean: clean
	rm -rf rush-02

re: fclean $(EXEC)

.PHONY: all clean fclean re

%.o : %.c
	$(CC) -o $@ -c $<

$(EXEC): $(OBJ) 
	$(CC) $(SRC) -o $(EXEC)

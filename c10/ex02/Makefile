# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibertran <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/14 00:56:48 by ibertran          #+#    #+#              #
#    Updated: 2023/09/19 03:47:11 by ibertran         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_tail

# *** SOURCES **************************************************************** #

SRC			=	ft_tail ft_errors ft_display \
				ft_putchar_fd ft_putstr_fd ft_strcmp ft_atoi

SRCS 		=	$(addsuffix .c,$(SRC))
BONUS_SRCS	=	$(addsuffix .c,$(BONUS_SRC))

# *** OBJECTS **************************************************************** #

OBJS_DIR	=	./objs/

OBJS 		=	$(addprefix $(OBJS_DIR),$(addsuffix .o,$(SRC)))
BONUS_OBJS	=	$(addprefix $(OBJS_DIR),$(addsuffix .o,$(BONUS_SRC)))

# *** INCLUDES *************************************************************** #

HEADERS		=	ex02.h

# *** CONFIG ***************************************************************** #

CC			=	cc
CFLAGS		+=	-Wall -Wextra -Werror

RM			=	rm -rf
MKDIR 		= 	mkdir -p

# *** TARGETS **************************************************************** #

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJS_DIR)%.o : %.c $(HEADERS) | $(OBJS_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJS_DIR) :
	$(MKDIR) $(@)

clean :
	$(RM) $(OBJS_DIR)
	
fclean : clean
	$(RM) $(NAME)
	
re : fclean all

# *** SPECIAL TARGETS ******************************************************** #

.PHONY : all clean fclean re

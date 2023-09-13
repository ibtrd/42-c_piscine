# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibertran <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/14 00:56:48 by ibertran          #+#    #+#              #
#    Updated: 2023/09/14 01:52:20 by ibertran         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

# *** SOURCES **************************************************************** #

SRC			=	ft_display_file ft_putchar_fd ft_putstr_fd

SRCS 		=	$(addsuffix .c, $(SRC))
BONUS_SRCS	=	$(addsuffix .c, $(BONUS_SRC))

# *** OBJECTS **************************************************************** #

OBJS_DIR	=	./objs/

OBJS 		=	$(addprefix $(OBJS_DIR),$(addsuffix .o, $(SRC)))
BONUS_OBJS	=	$(addprefix $(OBJS_DIR),$(addsuffix .o, $(BONUS_SRC)))

# *** INCLUDES *************************************************************** #

HEADERS		=	ex00.h

# *** CONFIG ***************************************************************** #

CC			=	cc
CFLAGS		+=	-Wall -Wextra -Werror

RM			=	rm -rf
MKDIR 		= 	mkdir -p

# *** TARGETS **************************************************************** #

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LDFLAGS) $(LDLIBS) -o $(NAME)

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
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibertran <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/12 17:11:22 by ibertran          #+#    #+#              #
#    Updated: 2023/08/12 17:56:54 by ibertran         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	=	do-op

SRCS	=	main.c					\
			ft_lib.c 				\
			op_functions.c 			\
			forbidden_op.c

OBJS 	=	$(SRCS:.c=.o)

HEADER	=	includes/

CC 		=	cc

CFLAGS 	+=	-Wall -Wextra -Werror -I $(HEADER)

RM		= 	rm -f

$(NAME)	:	$(OBJS)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

all		:	$(NAME)

clean	:	
			$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re
NAME	:=	libft.a

SDIR	:=	srcs/

SRC		:=	ft_putchar.c\
			ft_swap.c\
			ft_putstr.c\
			ft_strlen.c\
			ft_strcmp.c

SRCS	:=	$(addprefix $(SDIR),$(SRC))

OBJS	:=	$(SRCS:.c=.o)

IDIR	:=	includes/

DEPS	:=	$(IDIR)/ft.h

CC 		:=	cc

CFLAGS	+=	-Wall -Wextra -Werror -I $(IDIR)

RM		:=	rm -f

all		:	$(NAME)

%.o		:	%.c $(DEPS)
			$(CC) $(CFLAGS) -c -o $@ $<

$(NAME) :	$(OBJS)
			ar rcs $(NAME) $(OBJS)
			ranlib $(NAME)

clean	:
			$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re
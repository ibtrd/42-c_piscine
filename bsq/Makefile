NAME = bsq

CC = cc

MY_SOURCES = check_square.c create_map.c fill_square.c free_mem.c get_map_infos.c \
	     get_raw_map.c init_struct.c main.c map_is_valid.c solve.c 

MY_OBJECTS = $(MY_SOURCES:.c=.o)

CFLAGS += -Wall -Wextra -Werror -I includes

INCLUDES = includes/ft.h

all: $(NAME)

%.o : %.c $(INCLUDES)
	$(CC) $(CFLAGS) $(MY_SOURCES) -c $<

$(NAME): $(MY_OBJECTS)
	$(CC) $(CFLAGS) $(MY_SOURCES) -o $(NAME)

clean:
	rm -rf $(MY_OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

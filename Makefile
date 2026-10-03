NAME = car-management
CC = CC
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I INCLUDES
RM = rm -rf

SRC = srcs/main.c \











OBJS = $(SRC:.c=.o)

all $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.car INCLUDES/ft.h
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re

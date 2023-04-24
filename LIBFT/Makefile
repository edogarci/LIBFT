NAME = libft.a

SOURCE = $(wildcard ./*.c)

FLAGS = -Wall -Wextra -Werror

OBJECTS = $(SOURCE:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

$(OBJECTS): $(SOURCE)
	gcc $(FLAGS) -c $(SOURCE)

clean:
	rm -f $(OBJECTS)

fclean:
	rm -f $(OBJECTS) $(NAME)

re: fclean all

.PHONY: all clean fclean re
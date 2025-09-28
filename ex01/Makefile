NAME = fixed
CFLAGS = -Wall -Werror -Wextra -O3 -std=c++98
SRC = Fixed.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

$(NAME):
	c++ $(CFLAGS) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	rm $(OBJ)

fclean: clean
	rm $(NAME)

re: fclean all

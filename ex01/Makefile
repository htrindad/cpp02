NAME = Fixed
CFLAGS = -Wall -Werror -Wextra -O3 -std=c++98
SRC = Fixed.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
CXX = c++

$(NAME): $(OBJ)
	c++ $(CFLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	rm $(OBJ)

fclean: clean
	rm $(NAME)

re: fclean all

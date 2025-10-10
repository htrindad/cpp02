NAME = Fixed
CXXFLAGS = -Wall -Werror -Wextra -O3 -std=c++98
SRC = Fixed.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
CXX = c++

$(NAME): $(OBJ)
	c++ $(CXXFLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

%.o: %.cpp
	c++ $(CXXFLAGS) -c $< -o $@

re: fclean all

clear:
	@clear
	@make re

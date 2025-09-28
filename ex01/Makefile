NAME = Fixed
CXXFLAGS = -Wall -Werror -Wextra -O3 -std=c++98
SRC = Fixed.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
CXX = c++

$(NAME): $(OBJ)
	c++ $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	c++ $(CXXFLAGS) -MMD -MP -c $< -o $@

all: $(NAME)

clean:
	rm $(OBJ)

fclean: clean
	rm $(NAME)

re: fclean all

NAME = fixed
CFLAGS = -Wall -Werror -Wextra -O3 --std=c++98
SRC = Fixed.cpp main.cpp

$(NAME):
	c++ $(CFLAGS) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	rm $(NAME)

re: clean all

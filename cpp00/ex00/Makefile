NAME = megaphone

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

CXX = c++

SRC = megaphone.cpp

$(NAME): $(SRC)
	$(CXX) $(CFLAGS) $(SRC) -o $(NAME)

all: $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
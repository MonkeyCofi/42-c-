NAME = interface

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g3

SRCS = ICharacter.cpp AMateria.cpp Character.cpp Ice.cpp Cure.cpp MateriaSource.cpp main.cpp

OBJS = $(SRCS:.cpp=.o)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@
	
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -fsanitize=address $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJS)
	
fclean: clean
	rm -f $(NAME)
	
re: fclean all

.PHONY: all clean fclean re

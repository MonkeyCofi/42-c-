NAME = inheritance

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow

SRCS = ClapTrap.cpp ScavTrap.cpp FragTrap.cpp main.cpp

OBJS = $(SRCS:.cpp=.o)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@
	
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJS)
	
fclean: clean
	rm -f $(NAME)
	
re: fclean all

.PHONY: all clean fclean re

#/bin/zsh

read -p "Program name: " NAME

IFS=' ' read -r -p "Program sources: " -a SRCS

for i in ${SRCS[@]}; do
	touch $i
done

touch ./Makefile

echo	\
"NAME = $NAME

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = ${SRCS[*]}

OBJS = \$(SRCS:.cpp=.o)

%.o: %.cpp
	\$(CXX) \$(CXXFLAGS) \$< -o \$@
	
\$(NAME): \$(OBJS)
	\$(CXX) \$(CXXFLAGS) \$(OBJS) -o \$(NAME)

all: \$(NAME)

clean:
	rm -f \$(OBJS)
	
fclean: clean
	rm -f \$(NAME)
	
re: fclean all

.PHONY: all clean fclean re" > ./Makefile
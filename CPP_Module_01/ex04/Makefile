NAME = replace 
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g

SRCS =  main.cpp 
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) *.replace

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re


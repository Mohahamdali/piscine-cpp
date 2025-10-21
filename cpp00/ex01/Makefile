CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = cpp.cpp helper.cpp
OBJ = $(SRC:.cpp=.o)
NAME = iphonix

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp header.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = Claptrap.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = Claptrap_app

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

%.o: %.cpp Claptrap.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(NAME)

.PHONY: all clean
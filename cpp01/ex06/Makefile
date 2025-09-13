CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp  Harl.cpp
OBJS = $(SRCS:.cpp=.o)
TARGET = harlFilter

all: $(TARGET)

$(TARGET): $(OBJS) Harl.hpp
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

%.o: %.cpp 
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean

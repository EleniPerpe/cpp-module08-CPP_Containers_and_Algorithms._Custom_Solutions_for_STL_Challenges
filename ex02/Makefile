# Source Files
SRCS = main.cpp

# Object Files
OBJS = $(SRCS:.cpp=.o)

# Name Of The Compiled Program
NAME = stack

# Compilation Program
CXX = c++

# Compilation Flags
CXXFLAGS = -Wall -Wextra -Werror -std=c++11

# Remove Files Command
RM = rm -f

# Default Target
all: $(NAME)

# Linking Target
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

# Compilation of each .cpp file to .o file
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean Target
clean:
	$(RM) $(OBJS)

# Full Clean Target (removes executable too)
fclean: clean
	$(RM) $(NAME)

# Rebuild Everything
re: fclean all

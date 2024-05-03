NAME = Bureaucrat
CXX = c++
SRCS =	main.cpp \
		Bureaucrat.cpp

OBJS = $(SRCS:.cpp=.o)
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

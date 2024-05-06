NAME = Form
CC = c++
SRCS =	main.cpp \
		Bureaucrat.cpp \
		Form.cpp

OBJS = $(SRCS:.cpp=.o)
CCFLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CCFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/15 15:43:05 by myagiz            #+#    #+#              #
#    Updated: 2024/05/15 15:43:06 by myagiz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

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

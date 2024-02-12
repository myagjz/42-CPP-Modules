# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/11 15:43:57 by myagiz            #+#    #+#              #
#    Updated: 2024/02/11 16:03:40 by myagiz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = polymorphism
CC = c++
SRCS =	main.cpp \
		Animal.cpp \
		Dog.cpp Cat.cpp \
		WrongAnimal.cpp WrongCat.cpp

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
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/11 15:44:23 by myagiz            #+#    #+#              #
#    Updated: 2024/02/11 16:22:26 by myagiz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = abstract
CC = c++
SRCS =	main.cpp \
		Animal.cpp \
		Dog.cpp Cat.cpp \
		WrongAnimal.cpp WrongCat.cpp \
		Brain.cpp
		
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
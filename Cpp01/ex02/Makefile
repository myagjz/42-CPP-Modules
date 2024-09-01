# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/01 18:00:20 by myagiz            #+#    #+#              #
#    Updated: 2024/09/01 18:00:21 by myagiz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie
CC = c++
RM = rm -rf
CCFLAGS = -Wall -Wextra -Werror -std=c++98
SRC =  main.cpp
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CCFLAGS) $(OBJ) -o $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/06 14:12:30 by myagiz            #+#    #+#              #
#    Updated: 2024/02/06 14:15:06 by myagiz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed
CC = c++
CCFLAGS = -Wall -Wextra -Werror -std=c++98
SRC =  main.cpp Fixed.cpp
OBJ = main.o Fixed.o
RM = rm -rf

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CCFLAGS) $(OBJ) -o $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

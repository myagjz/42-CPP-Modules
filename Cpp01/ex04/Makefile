# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/31 18:05:06 by myagiz            #+#    #+#              #
#    Updated: 2024/01/31 18:06:43 by myagiz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace
CC = c++ -fsanitize=address
RM = rm -rf
CCFLAGS = -Wall -Wextra -Werror -std=c++98
SRC =  replace.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CCFLAGS) $(OBJ) -o $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME) *.replace

re : fclean all

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/01 18:01:50 by myagiz            #+#    #+#              #
#    Updated: 2024/09/01 18:01:51 by myagiz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl
CC = c++
CCFLAGS = -Wall -Wextra -Werror -std=c++98
SRC =  Harl.cpp main.cpp
RM = rm -rf
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CCFLAGS) $(OBJ) -o $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

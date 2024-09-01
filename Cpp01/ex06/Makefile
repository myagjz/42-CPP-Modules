# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/01 18:02:09 by myagiz            #+#    #+#              #
#    Updated: 2024/09/01 18:02:11 by myagiz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harlFilter
CC = c++
RM = rm -rf
CCFLAGS = -Wall -Wextra -Werror -std=c++98
SRC =  Harl.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CCFLAGS) $(OBJ) -o $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

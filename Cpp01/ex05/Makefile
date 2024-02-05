# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/31 18:07:01 by myagiz            #+#    #+#              #
#    Updated: 2024/02/05 16:31:25 by myagiz           ###   ########.fr        #
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

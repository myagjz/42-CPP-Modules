# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/01 17:50:14 by myagiz            #+#    #+#              #
#    Updated: 2024/09/01 17:50:15 by myagiz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Now_talking
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRC =  main.cpp Fixed.cpp
OBJ = main.o Fixed.o
RM = rm -rf

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

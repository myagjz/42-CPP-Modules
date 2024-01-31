# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/30 13:23:59 by myagiz            #+#    #+#              #
#    Updated: 2024/01/31 15:07:54 by myagiz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Phonebook
SRC = Contact.cpp PhoneBook.cpp main.cpp
OBJ = Contact.o PhoneBook.o main.o
CFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
RM = rm -rf

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all
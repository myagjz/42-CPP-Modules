# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/01 17:45:41 by myagiz            #+#    #+#              #
#    Updated: 2024/09/01 17:45:44 by myagiz           ###   ########.fr        #
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
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/03 00:35:19 by gfredes-          #+#    #+#              #
#    Updated: 2024/05/04 01:03:05 by gfredes-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CFLAGS = -Wall -Wextra -Werror -std=c++98

CLEAN = rm -f

SRC = Contact.cpp \
		main.cpp \
		PhoneBook.cpp

OBJT = $(patsubst %.cpp, %.o, $(SRC))

all: $(NAME)

$(NAME): $(OBJT)
	c++ $(CFLAGS) $(OBJT) -o $(NAME)

clean:
	$(CLEAN) $(OBJT)

fclean: clean
	$(CLEAN) $(NAME)

re: fclean all

.PHONY: all clean fclean re
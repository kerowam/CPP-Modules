# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/05 02:33:17 by gfredes-          #+#    #+#              #
#    Updated: 2024/06/12 19:09:28 by gfredes-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain

CFLAGS = -Wall -Wextra -Werror -std=c++98

CLEAN = rm -f

SRC =	main.cpp \
		Animal.cpp \
		Cat.cpp \
		Dog.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp \
		Brain.cpp
		
OBJT = $(patsubst %.cpp, %.o, $(SRC))

all: $(NAME)

$(NAME): $(OBJT)
	clang++ $(CFLAGS) $(OBJT) -o $(NAME)

clean:
	$(CLEAN) $(OBJT)

fclean: clean
	$(CLEAN) $(NAME)

re: fclean all

.PHONY: all clean fclean re
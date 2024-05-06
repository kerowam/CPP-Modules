# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/06 18:35:54 by gfredes-          #+#    #+#              #
#    Updated: 2024/05/06 18:39:07 by gfredes-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = more_brainz

CFLAGS = -Wall -Wextra -Werror -std=c++98

CLEAN = rm -f

SRC = Zombie.cpp \
		main.cpp \
		zombieHorde.cpp


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
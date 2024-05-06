# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/06 03:33:24 by gfredes-          #+#    #+#              #
#    Updated: 2024/05/06 18:39:10 by gfredes-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brainz

CFLAGS = -Wall -Wextra -Werror -std=c++98

CLEAN = rm -f

SRC = Zombie.cpp \
		randomChump.cpp \
		newZombie.cpp \
		main.cpp

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
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/01 03:50:28 by gfredes-          #+#    #+#              #
#    Updated: 2024/06/02 01:39:35 by gfredes-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = DiamondTrap

CFLAGS = -Wall -Wextra -Werror -std=c++98

CLEAN = rm -f

SRC =	main.cpp \
		ClapTrap.cpp \
		ScavTrap.cpp \
		FragTrap.cpp \
		DiamondTrap.cpp
		
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
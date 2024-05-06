# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/07 01:13:47 by gfredes-          #+#    #+#              #
#    Updated: 2024/05/07 01:17:08 by gfredes-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = unnecesary_violence

CFLAGS = -Wall -Wextra -Werror -std=c++98

CLEAN = rm -f

SRC = main.cpp \
		HumanA.cpp \
		HumanB.cpp \
		Weapon.cpp

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
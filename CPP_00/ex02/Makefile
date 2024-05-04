# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/03 00:35:19 by gfredes-          #+#    #+#              #
#    Updated: 2024/05/04 23:49:06 by gfredes-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Account

CFLAGS = -Wall -Wextra -Werror -std=c++98

CLEAN = rm -f

SRC = Account.cpp \
		tests.cpp

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
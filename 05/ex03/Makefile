# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: humartin <humartin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/06 12:36:06 by humartin          #+#    #+#              #
#    Updated: 2023/01/30 12:58:42 by humartin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = cafe
SRCS = $(wildcard *.cpp)
OBJS = $(SRCS:.cpp=.o)
FLAGS = -Wall -Wextra -Werror -std=c++98

GREEN = '\033[92m'
RED = '\033[91m'
NONE = '\033[3m'

all: $(NAME)

$(NAME): $(SRCS) $(OBJS)
	@echo $(GREEN) "--Loading--" $(NONE)
	@sleep 0.2
	@g++ $(FLAGS) $(SRCS) -o $(NAME)
	@echo $(GREEN) "$(NAME) was created ! " $(NONE)

%o: %.c
	g++ -c $(FLAGS) $< -o $@

clean:
	@echo $(RED) "-- Deleting-- " $(NONE)
	@sleep 0.2
	@ rm -rf $(OBJS)
	@echo $(RED) "Objects was deleted" $(NONE)

fclean: clean
	@echo $(RED) "Deleting --$(NAME)-- " $(NONE)
	@sleep 0.2
	@rm -rf $(NAME)
	@echo $(RED) "$(NAME) was deleted !" $(NONE)

re: fclean all

.PHONY: all clean fclean re

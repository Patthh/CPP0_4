# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pracksaw <pracksaw@student.42bangkok.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/21 18:16:33 by pracksaw          #+#    #+#              #
#    Updated: 2025/03/06 07:02:20 by pracksaw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = clang++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = phonebook
SRCS = contact.cpp  contact.hpp  phonebook.cpp  phonebook.hpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

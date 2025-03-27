# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pracksaw <pracksaw@student.42bangkok.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/21 18:08:58 by pracksaw          #+#    #+#              #
#    Updated: 2025/03/09 17:54:21 by pracksaw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#==============================================================================#
## MEGAPHONE MAKEFILE 📣 
#==============================================================================#

#==============================================================================#
## VARIABLES
MAKEFLAGS += --no-print-directory

NAME                    =       megaphone
CC                      =       c++
CFLAGS                  =       -Wall -Wextra -Werror -std=c++98

#==============================================================================#
## DIRECTORIES
DIR_SRC                 =       ./
DIR_OBJ                 =       ./obj/

#==============================================================================#
## FILES
SRCS                    =       $(DIR_SRC)megaphone.cpp

OBJS                    =       $(patsubst $(DIR_SRC)%.cpp,$(DIR_OBJ)%.o,$(SRCS))
DEPS                    =       $(OBJS:.o=.d)

TOTAL_FILES             =       $(words $(SRCS))
COMPILED_FILES          =       0
DOTS                    =       $(shell printf ".%.0s" $(shell seq $(TOTAL_FILES)))

#==============================================================================#
## RULES
all:                            $(DIR_OBJ) $(NAME)
				@printf "$(GREEN)🎉 Build complete! $(NAME) has been created. 🎉$(NC)\n"

$(NAME):                        $(OBJS)
				@printf "$(YELLOW)🔗 Linking objects into executable...$(NC)\n"
				@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
				@printf "$(GREEN)✅ Executable $(NAME) created successfully! 🚀$(NC)\n"

$(DIR_OBJ):
				@mkdir -p $(DIR_OBJ)
				@printf "$(CYAN)📁 Created objects directory.$(NC)\n"

$(DIR_OBJ)%.o: $(DIR_SRC)%.cpp
				@$(eval COMPILED_FILES=$(shell printf $$(($(COMPILED_FILES) + 1))))
				@DOTS_LEFT=$(shell printf "$(DOTS)" | cut -c$(COMPILED_FILES)-) ; \
				printf "\r$(CYAN)🔄 Compiling: $< $(COMPILED_FILES)/$(TOTAL_FILES)$(NC) 🟡%s"
				@$(CC) $(CFLAGS) -c $< -o $@
				@if [ $(COMPILED_FILES) -eq $(TOTAL_FILES) ]; then echo; fi

clean:
				@printf "$(YELLOW)🧹 Cleaning object files...$(NC)\n"
				@$(RM) -r $(DIR_OBJ)
				@printf "$(GREEN)✨ Object files cleaned!$(NC)\n"

fclean:                         clean
				@printf "$(YELLOW)🗑️ Cleaning $(NAME) executable...$(NC)\n"
				@$(RM) $(NAME)
				@printf "$(GREEN)🧼 Executable cleaned!$(NC)\n"

re:                             fclean all

help:
				@printf "Using $(SHELL)\n"
				@printf "$(CYAN)📚 Available targets:$(NC)\n"
				@printf "$(GREEN)  make$(NC)        - Build the phonebook program\n"
				@printf "$(GREEN)  make clean$(NC)  - Remove object files\n"
				@printf "$(GREEN)  make fclean$(NC) - Remove object files and executable\n"
				@printf "$(GREEN)  make re$(NC)     - Rebuild from scratch\n"
				@printf "$(GREEN)  make help$(NC)   - Display this help message\n"

#==============================================================================#
## COLORS
GREEN = \033[0;32m
CYAN = \033[0;36m
YELLOW = \033[0;33m
RED = \033[0;31m
NC = \033[0m

.PHONY:	all clean fclean re help

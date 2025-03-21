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
ifeq (,$(shell command -v bash 2>/dev/null))
  SHELL := /bin/sh
  $(warning Bash not found, using default shell.)
else
  SHELL := /bin/bash
endif

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
				@echo "$(GREEN)🎉 Build complete! $(NAME) has been created. 🎉$(NC)"

$(NAME):                        $(OBJS)
				@echo "$(YELLOW)🔗 Linking objects into executable...$(NC)"
				@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
				@echo "$(GREEN)✅ Executable $(NAME) created successfully! 🚀$(NC)"

$(DIR_OBJ):
				@mkdir -p $(DIR_OBJ)
				@echo "$(CYAN)📁 Created objects directory.$(NC)"

$(DIR_OBJ)%.o: $(DIR_SRC)%.cpp
				@$(eval COMPILED_FILES=$(shell echo $$(($(COMPILED_FILES) + 1))))
				@DOTS_LEFT=$(shell echo "$(DOTS)" | cut -c$(COMPILED_FILES)-) ; \
				printf "\r$(CYAN)🔄 Compiling: $< $(COMPILED_FILES)/$(TOTAL_FILES)$(NC) 🟡%s"
				@$(CC) $(CFLAGS) -c $< -o $@
				@if [ $(COMPILED_FILES) -eq $(TOTAL_FILES) ]; then echo; fi

clean:
				@echo "$(YELLOW)🧹 Cleaning object files...$(NC)"
				@$(RM) -r $(DIR_OBJ)
				@echo "$(GREEN)✨ Object files cleaned!$(NC)"

fclean:                         clean
				@echo "$(YELLOW)🗑️ Cleaning $(NAME) executable...$(NC)"
				@$(RM) $(NAME)
				@echo "$(GREEN)🧼 Executable cleaned!$(NC)"

re:                             fclean all

help:
				@echo "Using $(SHELL)"
				@echo "$(CYAN)📚 Available targets:$(NC)"
				@echo "$(GREEN)  make$(NC)        - Build the phonebook program"
				@echo "$(GREEN)  make clean$(NC)  - Remove object files"
				@echo "$(GREEN)  make fclean$(NC) - Remove object files and executable"
				@echo "$(GREEN)  make re$(NC)     - Rebuild from scratch"
				@echo "$(GREEN)  make help$(NC)   - Display this help message"
debug:
				@type -a echo
				@echo "$(CYAN)📚 Available targets:$(NC)"
				@echo -e "\e[0;33m???? Cleaning object files...\e[0m"
				@locale
				@bash --version
		        @printf "\x1b[0;33m???? Cleaning object files...\x1b[0m\n"

#==============================================================================#
## COLORS
GREEN = \033[0;32m
CYAN = \033[0;36m
YELLOW = \033[0;33m
RED = \033[0;31m
NC = \033[0m

.PHONY:	all clean fclean re help

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pracksaw <pracksaw@student.42bangkok.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/21 18:16:33 by pracksaw          #+#    #+#              #
#    Updated: 2025/03/12 21:47:18 by pracksaw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#==============================================================================#
## PHONEBOOK MAKEFILE 📞 
#==============================================================================#

## VARIABLES 🧩
CXX                     =       c++
CXXFLAGS                =       -Wall -Wextra -Werror -std=c++98
NAME                    =       phonebook

#==============================================================================#
## FILES 📄
SRC_FILES               =       contact.cpp phonebook.cpp
HDR_FILES               =       contact.hpp phonebook.hpp colors.hpp
OBJ_FILES               =       $(SRC_FILES:.cpp=.o)

#==============================================================================#
## PROGRESS TRACKING ⏱️
TOTAL_FILES             =       $(words $(SRC_FILES))
COMPILED_FILES          =       0
DOTS                    =       $(shell printf ".%.0s" $(shell seq $(TOTAL_FILES)))

#==============================================================================#
## COLORS 🎨
GREEN                   =       \033[0;32m
CYAN                    =       \033[0;36m
YELLOW                  =       \033[0;33m
RED                     =       \033[0;31m
PURPLE                  =       \033[0;35m
NC                      =       \033[0m

#==============================================================================#
## RULES 🔨
all:                            $(NAME)
				@echo "$(GREEN)🎉 PhoneBook has been successfully compiled! 🎉$(NC)"

$(NAME):                        $(OBJ_FILES)
				@echo "$(YELLOW)🔗 Linking objects into executable...$(NC)"
				@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ_FILES)
				@echo "$(GREEN)✅ Executable $(NAME) created! 📞$(NC)"

%.o: %.cpp %.hpp
				@$(eval COMPILED_FILES=$(shell echo $$(($(COMPILED_FILES) + 1))))
				@printf "\r$(CYAN)🔄 Compiling: $< $(COMPILED_FILES)/$(TOTAL_FILES)$(NC) 🟡"
				@$(CXX) $(CXXFLAGS) -c $< -o $@
				@if [ $(COMPILED_FILES) -eq $(TOTAL_FILES) ]; then echo; fi

contact.o: contact.cpp contact.hpp
				@echo "$(CYAN)🔄 Compiling: contact.cpp$(NC)"
				@$(CXX) $(CXXFLAGS) -c contact.cpp -o contact.o

phonebook.o: phonebook.cpp phonebook.hpp contact.hpp
				@echo "$(CYAN)🔄 Compiling: phonebook.cpp$(NC)"
				@$(CXX) $(CXXFLAGS) -c phonebook.cpp -o phonebook.o

clean:
				@echo "$(YELLOW)🧹 Cleaning object files...$(NC)"
				@rm -f $(OBJ_FILES)
				@echo "$(GREEN)✨ Object files cleaned!$(NC)"

fclean:                         clean
				@echo "$(YELLOW)🗑️  Cleaning $(NAME) executable...$(NC)"
				@rm -f $(NAME)
				@echo "$(GREEN)🧼 All cleaned up!$(NC)"

re:                             fclean all
				@echo "$(PURPLE)🔄 Project rebuilt from scratch! 🔄$(NC)"

#==============================================================================#
.PHONY:                         all clean fclean re help

help:
				@echo "$(CYAN)📚 Available targets:$(NC)"
				@echo "$(GREEN)  make$(NC)        - Build the phonebook program"
				@echo "$(GREEN)  make clean$(NC)  - Remove object files"
				@echo "$(GREEN)  make fclean$(NC) - Remove object files and executable"
				@echo "$(GREEN)  make re$(NC)     - Rebuild from scratch"
				@echo "$(GREEN)  make help$(NC)   - Display this help message"
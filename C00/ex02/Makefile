# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pracksaw <pracksaw@student.42bangkok.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/21 18:14:54 by pracksaw          #+#    #+#              #
#    Updated: 2025/03/09 17:59:02 by pracksaw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#==============================================================================#
## ACCOUNT TESTS MAKEFILE 📊
#==============================================================================#

## VARIABLES 🧩
CXX                     =       c++
CXXFLAGS                =       -Wall -Wextra -Werror -std=c++98
NAME                    =       tests

#==============================================================================#
## FILES 📄
SRC_FILES               =       account.cpp
HDR_FILES               =       account.hpp Account.hpp
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
				@echo "$(GREEN)🎉 Tests have been successfully compiled! 🎉$(NC)"

$(NAME):                        $(OBJ_FILES)
				@echo "$(YELLOW)🔗 Linking objects into executable...$(NC)"
				@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ_FILES)
				@echo "$(GREEN)✅ Executable $(NAME) created! 🧪$(NC)"

account.o: account.cpp account.hpp Account.hpp
				@echo "$(CYAN)🔄 Compiling: account.cpp$(NC)"
				@$(CXX) $(CXXFLAGS) -c account.cpp -o account.o

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
## ADDITIONAL HELPERS 💡
.PHONY:                         all clean fclean re help

help:
				@echo "$(CYAN)📚 Available targets:$(NC)"
				@echo "$(GREEN)  make$(NC)        - Build the tests program"
				@echo "$(GREEN)  make clean$(NC)  - Remove object files"
				@echo "$(GREEN)  make fclean$(NC) - Remove object files and executable"
				@echo "$(GREEN)  make re$(NC)     - Rebuild from scratch"
				@echo "$(GREEN)  make help$(NC)   - Display this help message"
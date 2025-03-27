# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pracksaw <pracksaw@student.42bangkok.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/21 18:14:54 by pracksaw          #+#    #+#              #
#    Updated: 2025/03/27 19:03:31 by pracksaw         ###   ########.fr        #
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
SRC_FILES               =       tests.cpp Account.cpp
HDR_FILES               =       Account.hpp Account.hpp
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
				@printf "$(GREEN)🎉 Tests have been successfully compiled! 🎉$(NC)\n"

$(NAME):                        $(OBJ_FILES)
				@printf "$(YELLOW)🔗 Linking objects into executable...$(NC)\n"
				@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ_FILES)
				@printf "$(GREEN)✅ Executable $(NAME) created! 🧪$(NC)\n"

account.o: account.cpp account.hpp Account.hpp
				@printf "$(CYAN)🔄 Compiling: account.cpp$(NC)\n"
				@$(CXX) $(CXXFLAGS) -c account.cpp -o account.o

clean:
				@printf "$(YELLOW)🧹 Cleaning object files...$(NC)\n"
				@rm -f $(OBJ_FILES)
				@printf "$(GREEN)✨ Object files cleaned!$(NC)\n"

fclean:                         clean
				@printf "$(YELLOW)🗑️  Cleaning $(NAME) executable...$(NC)\n"
				@rm -f $(NAME)
				@printf "$(GREEN)🧼 All cleaned up!$(NC)\n"

re:                             fclean all
				@printf "$(PURPLE)🔄 Project rebuilt from scratch! 🔄$(NC)\n"

#==============================================================================#
## ADDITIONAL HELPERS 💡
.PHONY:                         all clean fclean re help

help:
				@printf "$(CYAN)📚 Available targets:$(NC)\n"
				@printf "$(GREEN)  make$(NC)        - Build the tests program\n"
				@printf "$(GREEN)  make clean$(NC)  - Remove object files\n"
				@printf "$(GREEN)  make fclean$(NC) - Remove object files and executable\n"
				@printf "$(GREEN)  make re$(NC)     - Rebuild from scratch\n"
				@printf "$(GREEN)  make help$(NC)   - Display this help message\n"
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: miguelro <miguelro@students.42lisboa.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/29 15:23:43 by miguelro          #+#    #+#              #
#    Updated: 2023/08/20 15:40:21 by miguelro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#----- Executable Name-------------
NAME = Animal

#----- Colors----------------------
DEFAULT = \033[0;39m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m

#----- Flags ----------------------
CXX = c++
RM = rm -f
CXXFLAGS = -Wall -Werror -Wextra -g -std=c++98
$(VERBOSE).SILENT:

#----- Paths----------------------
SRC_PATH = ./sources
OBJ_PATH = ./objects
INC = -I ./includes

SRC_NAME = main.cpp\
			Animal.cpp\
			WrongAnimal.cpp\
			WrongCat.cpp\
			Cat.cpp\
			Dog.cpp
			

#----- Files----------------------
OBJS = $(addprefix $(OBJ_PATH)/, $(SRC_NAME:.cpp=.o))

SRC = $(addprefix $(SRC_PATH)/, $(SRC_NAME))


#----- Compilation----------------------
all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) $(INC) -o $(NAME)
	clear
	@echo "$(GREEN)$(NAME) compiled $(DEFAULT)"

#----- Create Objects----------------------
$(OBJ_PATH)/%.o : $(SRC_PATH)/%.cpp
	mkdir -p objects
	$(CXX) -c $(CXXFLAGS) $(INC) $< -o $@

clean:
	@$(RM) -rf $(OBJ_PATH)
	@echo "------------------------"
	@echo "\n$(RED)cleaning objects\n$(DEFAULT)"
	@echo "------------------------"

fclean: clean
	@$(RM) -f $(NAME)
#@echo "$(RED)$(NAME) is deleted$(DEFAULT)"

re: fclean all

.PHONY: all re clean fclean
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/03 17:30:22 by seungsle          #+#    #+#              #
#    Updated: 2022/08/03 17:30:23 by seungsle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp
SRCS := $(addprefix $(SRC_DIR), $(SRCS))
OBJS =  $(addprefix $(OBJ_DIR), $(SRCS:.cpp=.o))

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
INCFLAGS = -I$(INC_DIR)

NAME = zombie

SRC_DIR = srcs/
OBJ_DIR = objs/
INC_DIR = incs/

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@ $(INCFLAGS)

$(OBJ_DIR)%.o : $(SRC_DIR)%.cpp $(INC_DIR)*.hpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@ $(INCFLAGS)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
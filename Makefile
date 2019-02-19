# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/21 19:33:38 by lbenard           #+#    #+#              #
#    Updated: 2019/02/19 16:27:42 by lbenard          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	linux-lists

# Sources
SRC				=	srcs/main.c		\
					srcs/data.c

UNAME			=	$(shell uname)

LIBFT_FOLDER	=	libft
LIBFT			=	$(LIBFT_FOLDER)/libft.a

# Compilation
CXX				=	gcc
CFLAGS			=	-Wall -Wextra -Werror -O3 -Ofast -g -fsanitize=address
LDFLAGS			=	-fsanitize=address
INCLUDES		=	-I includes -I $(LIBFT_FOLDER)/includes
LIB_FOLDERS		=	-L$(LIBFT_FOLDER)
LIBS			=	-lft

# Linking
OBJ				=	$(SRC:.c=.o)

# Colors
GREEN			=	\033[32m
RESET			=	\033[0m

all: $(LIBFT) $(NAME)

$(NAME): $(OBJ)
	@printf "$(GREEN)[cc]$(RESET): done\n"
	@printf "$(GREEN)[ld]$(RESET): $(NAME)\n"
	@$(CXX) -o $(NAME) $(OBJ) $(LIB_FOLDERS) $(LIBS) $(LDFLAGS) $(INCLUDES)

.c.o: $(SRC)
	@printf "$(GREEN)[cc]$(RESET): $< -> $@\n"
	@printf "\e[1A"
	@gcc -c $< -o $@ $(INCLUDES) $(CFLAGS)
	@printf "\e[0K"

run: all
	@./$(NAME)

$(LIBFT):
	@printf "\e[0K"
	@printf "$(GREEN)[mk]$(RESET): libft all\n";
	@make -C libft
	@printf "\e[1A\e[1A\e[0K"
	@printf "$(GREEN)[mk]$(RESET): libft all done\n";

libft-clean:
	@printf "\e[0K"
	@printf "$(GREEN)[mk]$(RESET): libft clean\n";
	@make -C $(LIBFT_FOLDER) clean >/dev/null
	@printf "\e[1A\e[0K"
	@printf "$(GREEN)[mk]$(RESET): libft clean done\n";

libft-fclean:
	@printf "\e[0K"
	@printf "$(GREEN)[mk]$(RESET): libft fclean\n";
	@make -C $(LIBFT_FOLDER) fclean >/dev/null
	@printf "\e[1A\e[0K"
	@printf "$(GREEN)[mk]$(RESET): libft fclean done\n";

libft-re:
	@printf "\e[0K"
	@printf "$(GREEN)[mk]$(RESET): libft re\n";
	@make -C $(LIBFT_FOLDER) re
	@printf "\e[1A\e[0K"
	@printf "$(GREEN)[mk]$(RESET): libft re done\n";

clean: libft-clean
	@printf "\e[0K"
	@printf "$(GREEN)[rm]$(RESET): cleaned object files\n"
	@rm -rf $(OBJ)

fclean: clean libft-fclean
	@printf "\e[0K"
	@printf "$(GREEN)[rm]$(RESET): cleaned binary file\n"
	@rm -rf $(NAME)

separator:
	@printf "\n"

re: fclean separator $(LIBFT) all

.PHONY: norm libft-clean libft-fclean libft-re clean fclean re

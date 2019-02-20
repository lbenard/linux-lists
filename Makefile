# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/21 19:33:38 by lbenard           #+#    #+#              #
#    Updated: 2019/02/20 22:50:19 by lbenard          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	linux-lists
SRCS_LIST		=	main.c	\
					data.c

SRCS_FOLDER		=	./srcs/
SRCS			=	$(addprefix $(SRCS_FOLDER), $(SRCS_LIST))
OBJS_LIST		=	$(SRCS_LIST:.c=.o)
OBJS_FOLDER		=	./objs/
OBJS			=	$(addprefix $(OBJS_FOLDER), $(OBJS_LIST))

LIBFT_FOLDER	=	libft
LIBFT			=	$(LIBFT_FOLDER)/libft.a

CXX				=	gcc
LD				=	gcc
CFLAGS			=	-Wall -Wextra -Werror -O3 -Ofast -flto
LDFLAGS			=
INCLUDES		=	-I includes -I $(LIBFT_FOLDER)/includes
LIB_FOLDERS		=	-L$(LIBFT_FOLDER)
LIBS			=	-lft

# Colors
BOLD			=	\e[1m
DIM				=	\e[2m
ITALIC			=	\e[3m
UNDERLINED		=	\e[4m

BLACK			=	\e[30m
RED				=	\e[31m
GREEN			=	\e[32m
YELLOW			=	\e[33m
BLUE			=	\e[34m
MAGENTA			=	\e[35m
CYAN			=	\e[36m
LIGHT_GRAY		=	\e[37m
DARK_GRAY		=	\e[90m
LIGHT_RED		=	\e[91m
LIGHT_GREEN		=	\e[92m
LIGHT_YELLOW	=	\e[93m
LIGHT_BLUE		=	\e[94m
LIGHT_MAGENTA	=	\e[95m
LIGHT_CYAN		=	\e[96m
WHITE			=	\e[97m
RESET			=	\e[0m

PREFIX			=	$(BOLD)$(LIGHT_CYAN)[$(NAME)]$(RESET):

all: $(LIBFT) $(NAME)

$(NAME): $(OBJS)
	@$(LD) $(OBJS) $(LIBFT) -o $(NAME)
	@printf "$(PREFIX) done\n"

$(OBJS_FOLDER)%.o: $(SRCS_FOLDER)%.c
	@printf "$(PREFIX) $(shell basename $<)\n"
	@mkdir -p $(dir $@)
	@gcc -c $< -o $@ $(INCLUDES) $(CFLAGS)
	@printf "\e[1A\e[0K"

run: all
	@./$(NAME)

$(LIBFT):
	@printf "\e[0K"
	@printf "$(PREFIX) libft all\n";
	@make -C libft
	@printf "\e[2A\e[0K"
	@printf "$(PREFIX) libft all done\n";

libft-clean:
	@printf "\e[0K"
	@printf "$(PREFIX) libft clean\n";
	@make -C $(LIBFT_FOLDER) clean >/dev/null
	@printf "\e[1A\e[0K"
	@printf "$(PREFIX) libft clean done\n";

libft-fclean:
	@printf "\e[0K"
	@printf "$(PREFIX) libft fclean\n";
	@make -C $(LIBFT_FOLDER) fclean >/dev/null
	@printf "\e[1A\e[0K"
	@printf "$(PREFIX) libft fclean done\n";

libft-re:
	@printf "\e[0K"
	@printf "$(PREFIX) libft re\n";
	@make -C $(LIBFT_FOLDER) re
	@printf "\e[1A\e[0K"
	@printf "$(PREFIX) libft re done\n";

clean: libft-clean
	@printf "\e[0K"
	@printf "$(PREFIX) cleaned object files\n"
	@rm -rf $(OBJ)

fclean: clean libft-fclean
	@printf "\e[0K"
	@printf "$(PREFIX) cleaned binary file\n"
	@rm -rf $(NAME)

separator:
	@printf "\n"

re: fclean separator $(LIBFT) all

.PHONY: norm libft-clean libft-fclean libft-re clean fclean re

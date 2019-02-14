# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/05 18:02:14 by lbenard           #+#    #+#              #
#    Updated: 2019/02/14 16:50:33 by lbenard          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a
SRC			=	srcs/ft_memset.c						\
				srcs/ft_bzero.c							\
				srcs/ft_memcpy.c						\
				srcs/ft_memccpy.c						\
				srcs/ft_memmove.c						\
				srcs/ft_memchr.c						\
				srcs/ft_memcmp.c						\
				srcs/ft_memalloc.c						\
				srcs/ft_memdel.c						\
				srcs/ft_strlen.c						\
				srcs/ft_strnlen.c						\
				srcs/ft_strdup.c						\
				srcs/ft_strndup.c						\
				srcs/ft_strcpy.c						\
				srcs/ft_strncpy.c						\
				srcs/ft_strcat.c						\
				srcs/ft_strncat.c						\
				srcs/ft_strlcat.c						\
				srcs/ft_strchr.c						\
				srcs/ft_strrchr.c						\
				srcs/ft_strstr.c						\
				srcs/ft_strnstr.c						\
				srcs/ft_strcmp.c						\
				srcs/ft_strncmp.c						\
				srcs/ft_strnew.c						\
				srcs/ft_strdel.c						\
				srcs/ft_strclr.c						\
				srcs/ft_striter.c						\
				srcs/ft_striteri.c						\
				srcs/ft_strmap.c						\
				srcs/ft_strmapi.c						\
				srcs/ft_strequ.c						\
				srcs/ft_strnequ.c						\
				srcs/ft_strsub.c						\
				srcs/ft_strjoin.c						\
				srcs/ft_strtrim.c						\
				srcs/ft_strsplit.c						\
				srcs/ft_strcount.c						\
				srcs/ft_getline.c						\
				srcs/ft_skipchr.c						\
				srcs/ft_isalpha.c						\
				srcs/ft_isdigit.c						\
				srcs/ft_isalnum.c						\
				srcs/ft_isascii.c						\
				srcs/ft_isprint.c						\
				srcs/ft_isspace.c						\
				srcs/ft_isupper.c						\
				srcs/ft_islower.c						\
				srcs/ft_toupper.c						\
				srcs/ft_tolower.c						\
				srcs/ft_atoi.c							\
				srcs/ft_atof.c							\
				srcs/ft_itoa.c							\
				srcs/ft_abs.c							\
				srcs/ft_min.c							\
				srcs/ft_max.c							\
				srcs/ft_nblen.c							\
				srcs/ft_putchar.c						\
				srcs/ft_putstr.c						\
				srcs/ft_putendl.c						\
				srcs/ft_putnbr.c						\
				srcs/ft_putchar_fd.c					\
				srcs/ft_putstr_fd.c						\
				srcs/ft_putendl_fd.c					\
				srcs/ft_putnbr_fd.c						\
				srcs/ft_lstnew.c						\
				srcs/ft_lstnewcpy.c						\
				srcs/ft_lstdelone.c						\
				srcs/ft_lstdel.c						\
				srcs/ft_lstadd.c						\
				srcs/ft_lstiter.c						\
				srcs/ft_lstmap.c						\
				srcs/ft_lststrjoin.c					\
				srcs/ft_lstfind.c						\
				srcs/ft_lstcontentfind.c				\
				srcs/ft_lstpushback.c					\
				srcs/ft_lstlast.c						\
				srcs/ft_lstfree.c						\
				srcs/ft_lstremove.c						\
				srcs/ft_list_init_head.c				\
				srcs/ft_list_add.c						\
				srcs/ft_list_add_entry.c				\
				srcs/ft_list_add_tail.c					\
				srcs/ft_list_del.c						\
				srcs/ft_list_del_entry.c				\
				srcs/ft_list_move.c						\
				srcs/ft_list_move_tail.c				\
				srcs/ft_list_is_last.c					\
				srcs/ft_list_is_empty.c					\
				srcs/get_next_line.c					\
				srcs/ft_usize.c							\
				srcs/ft_isize.c							\
				srcs/ft_vec2i.c							\
				srcs/ft_vec2f.c							\
				srcs/ft_vec2f_dot.c						\
				srcs/ft_vec2f_scalar.c					\
				srcs/ft_vec3f.c							\
				srcs/ft_vec3f_dot.c						\
				srcs/ft_vec3f_scalar.c					\
				srcs/ft_vec3f_to_vec2f.c				\
				srcs/ft_vec4f.c							\
				srcs/ft_vec4f_dot.c						\
				srcs/ft_vec4f_scalar.c					\
				srcs/ft_vec4f_to_vec3f.c				\
				srcs/ft_vec3f_to_vec4f.c				\
				srcs/ft_vec2d.c							\
				srcs/ft_vec2d_dot.c						\
				srcs/ft_vec2d_scalar.c					\
				srcs/ft_vec3d.c							\
				srcs/ft_vec3d_dot.c						\
				srcs/ft_vec3d_scalar.c					\
				srcs/ft_vec3d_to_vec2d.c				\
				srcs/ft_vec4d.c							\
				srcs/ft_vec4d_dot.c						\
				srcs/ft_vec4d_scalar.c					\
				srcs/ft_vec4d_to_vec3d.c				\
				srcs/ft_vec3d_to_vec4d.c				\
				srcs/ft_vec2ld.c						\
				srcs/ft_vec2ld_dot.c					\
				srcs/ft_vec2ld_scalar.c					\
				srcs/ft_vec3ld.c						\
				srcs/ft_vec3ld_dot.c					\
				srcs/ft_vec3ld_scalar.c					\
				srcs/ft_vec3ld_to_vec2ld.c				\
				srcs/ft_vec4ld.c						\
				srcs/ft_vec4ld_dot.c					\
				srcs/ft_vec4ld_scalar.c					\
				srcs/ft_vec4ld_to_vec3ld.c				\
				srcs/ft_vec3ld_to_vec4ld.c				\
				srcs/ft_mat3.c							\
				srcs/ft_mat3_identity.c					\
				srcs/ft_print_mat3.c					\
				srcs/ft_mat3_x_mat3.c					\
				srcs/ft_mat3_x_vec3.c					\
				srcs/ft_mat4.c							\
				srcs/ft_mat4_identity.c					\
				srcs/ft_print_mat4.c					\
				srcs/ft_mat4_x_mat4.c					\
				srcs/ft_mat4_x_vec4.c					\
				srcs/ft_mat4_translation.c				\
				srcs/ft_mat4_scaling.c					\
				srcs/ft_mat4_rotation.c					\
				srcs/ft_mat4_orthographic_projection.c	\
				srcs/ft_mat4_perspective_projection.c	\
				srcs/ft_rgb.c							\
				srcs/ft_rgb_to_int.c					\
				srcs/ft_int_to_rgb.c					\
				srcs/ft_hsv.c							\
				srcs/ft_hsv_to_rgb.c
OBJ			=	$(SRC:.c=.o)
SRC_FOLDER	=	./srcs
INCLUDES	=	./includes
FLAGS		=	-Wall -Wextra -Werror -O3 -Ofast -flto -std=c89

# Colors
GREEN		=	\033[32m
RESET		=	\033[0m

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@ranlib $(NAME)
	@printf "$(GREEN)[$(NAME)]$(RESET): done\n"

.c.o: $(SRC)
	@printf "$(GREEN)[$(NAME)]$(RESET): $< -> $@\n"
	@printf "\e[1A"
	@gcc -c $< -o $@ -I $(INCLUDES) $(FLAGS)
	@printf "\e[0K"

clean:
	@printf "$(GREEN)[$(NAME)]$(RESET): clean\n"
	@rm -rf $(OBJ)

fclean:
	@rm -rf $(OBJ) $(NAME)
	@printf "$(GREEN)[$(NAME)]$(RESET): fclean\n"

re: fclean all

.PHONY: clean fclean re

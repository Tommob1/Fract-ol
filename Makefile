# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: btomlins <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/04 15:27:56 by btomlins          #+#    #+#              #
#    Updated: 2023/09/04 15:28:18 by btomlins         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables

NAME = fractol
CC = gcc
CFLAGS = -Wall -Wextra -Werror
LFLAGS = -Lmlx -lmlx -framework OpenGL -framework AppKit

# Inlcudes

INC = inc
LIBFT_INC = libft/includes
LIBFT = libft/libft.a
MLX = minilibx/mlx.a

# Sources

SRC_FILES = fract-ol/fractol.c

SRC_DIR = fract-ol/

SRCS = $(addprefix $(SRC_DIR)/, $(SRC_FILES))

OBJ_DIR = obj

OBJ_RAW = $(SRC_FILES:.c=.o)

OBJS = $(addprefix $(OBJ_DIR)/, $(OBJ_RAW))

# Rules

all: $(OBJ_DIR) $(NAME)

$(NAME): $(MLX) $(LIBFT) $(OBJS)
	$(CC) $(OBJS) -L libft -lft $(LFLAGS) -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@echo "Making $<"
	$(CC) $(CFLAGS) -I $(INC) -I $(LIBFT_INC) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $@

$(LIBFT):
	@echo "Making libft"
	$(MAKE) -C libft

$(MLX):
	@echo "Making mlx"
	$(MAKE) -C minilibx

clean:
	$(MAKE) clean -C libft
	@make -C minilibx clean
	rm -f $(OBJS)
	rm -df $(OBJ_DIR)

fclean: clean
	$(MAKE) fclean -C libft
	rm -f $(NAME)

re: fclean all

.PHONY: all libft clean fclean re

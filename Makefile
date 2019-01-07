# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akremer <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 17:38:05 by akremer           #+#    #+#              #
#    Updated: 2019/01/07 14:30:43 by akremer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

INCLUDES = includes/

SRC =	ft_atoi.c				\
		ft_memset.c				\
		ft_bzero.c				\
		ft_strlen.c				\
		ft_memccpy.c			\
		ft_strdup.c				\
		ft_memcmp.c				\
		ft_memchr.c				\
		ft_memmove.c			\
		ft_memcpy.c				\
		ft_strcpy.c				\
		ft_strncpy.c			\
		ft_strcat.c				\
		ft_strchr.c				\
		ft_strrchr.c			\
		ft_strstr.c				\
		ft_strnstr.c			\
		ft_strcmp.c				\
		ft_strncmp.c			\
		ft_isalpha.c			\
		ft_isdigit.c			\
		ft_isalnum.c			\
		ft_isascii.c			\
		ft_isprint.c			\
		ft_toupper.c			\
		ft_tolower.c			\
		ft_strncat.c			\
		ft_strlcat.c			\
		ft_putchar.c			\
		ft_putstr.c				\
		ft_memalloc.c			\
		ft_memdel.c				\
		ft_strnew.c				\
		ft_strdel.c				\
		ft_strclr.c				\
		ft_striter.c			\
		ft_striteri.c			\
		ft_strmap.c				\
		ft_strmapi.c			\
		ft_strnequ.c			\
		ft_strequ.c				\
		ft_strsub.c				\
		ft_strjoin.c			\
		ft_strtrim.c			\
		ft_strsplit.c			\
		ft_itoa.c				\
		ft_putendl.c			\
		ft_putnbr.c				\
		ft_putchar_fd.c			\
		ft_putstr_fd.c			\
		ft_putendl_fd.c			\
		ft_putnbr_fd.c			\
		ft_lstnew.c				\
		ft_lstmap.c				\
		ft_lstiter.c			\
		ft_lstadd.c				\
		ft_lstdel.c				\
		ft_lstdelone.c			\
		ft_foreach.c			\
		ft_putchar_puissant.c	\
		ft_strndup.c			\
		ft_sort_integer_table.c	\
		ft_strrev.c				\
		ft_strcsub.c			\
		ft_strclen.c			\
		ft_realloc.c			\
		get_next_line.c			\
		ft_printf.c				\
		ft_putnbr_baseG.c		\
		ft_putnbr_baseA.c		\
		ft_putnbr_base.c		\
		ft_putchar_printf.c	\
		ft_putchar_puissant_printf.c \
		ft_putnbr_printf.c \
		ft_putnbr_base_printf.c \
		ft_putnbr_baseG_printf.c \
		ft_putnbr_baseA_printf.c	\
		ft_inistruct_printf.c	\
		ft_putlong_base_printf.c		\
		ft_putlong_baseG_printf.c	\
		ft_putlonglong_base_printf.c	\
		ft_putlonglong_baseG_printf.c	\
		ft_flags_hl_printf.c					\
		ft_flags_printf.c						

OBJ = $(SRC:%.c=%.o)

FLAGS = -Wall -Werror -Wextra -I

all: $(NAME)

$(NAME):
	@echo "Compilation:"
	@gcc $(FLAGS) $(INCLUDES) -c $(SRC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "Done"

clean:
	@echo "Cleaning .o:"
	@rm -rf $(OBJ)
	@echo "Done"

fclean: clean
	@echo "Cleaning exec:"
	@rm -rf $(NAME)
	@echo "Done"

re: fclean all

test: re
	@echo "Compilation a.out:"
	@gcc $(NAME) main.c
	@echo "Running a.out"
	@./a.out

debugg: re
	@gcc -g $(NAME) main.c
	@lldb ./a.out

propre: clean
	@echo "Tout propre:"
	@rm -rf a.*
	@echo "Done"

.PHONY: clean fclean all re propre debugg $(NAME) test

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maadam <maadam@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/25 00:08:56 by maadam            #+#    #+#              #
#    Updated: 2020/05/25 00:08:56 by maadam           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all, clean, fclean, re

NAME = libft.a

HEAD = libft.h

FILES = ft_atoi.c \
	  ft_bzero.c \
	  ft_calloc.c \
	  ft_isalnum.c \
	  ft_isalpha.c \
	  ft_isascii.c \
	  ft_isdigit.c \
	  ft_isprint.c \
	  ft_itoa.c \
	  ft_memccpy.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_memcpy.c \
	  ft_memmove.c \
	  ft_memset.c \
	  ft_putchar_fd.c \
	  ft_putendl_fd.c \
	  ft_putnbr_fd.c \
	  ft_putstr_fd.c \
	  ft_split.c \
	  ft_strchr.c \
	  ft_strdup.c \
	  ft_strjoin.c \
	  ft_strlcat.c \
	  ft_strlcpy.c \
	  ft_strlen.c \
	  ft_strmapi.c \
	  ft_strncmp.c \
	  ft_strnstr.c \
	  ft_strrchr.c \
	  ft_strtrim.c \
	  ft_substr.c \
	  ft_tolower.c \
	  ft_toupper.c \

BONU_F = ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c

OBJ = $(FILES:.c=.o)

BON_OBJ = $(BONU_F:.c=.o)

FLAGS = -Wall -Wextra  -Werror

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $?
	@ranlib $(NAME)
	@echo "$(NAME) OK"

%.o: %.c $(HEAD)
	@gcc $(FLAGS) -c $< -o $@

bonus:	$(NAME) $(BON_OBJ)
	@ar rc $(NAME) $(BON_OBJ)
	@echo "bonus OK"

clean:
	@rm -f $(OBJ)
	@rm -f $(BON_OBJ)
	@echo "OBJ rm"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) rm"

re: fclean all

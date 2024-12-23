# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lukozime <lukozime@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/04 09:05:36 by lukozime          #+#    #+#              #
#    Updated: 2024/12/19 11:30:33 by lukozime         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

######################## COLORS #######################

PURPLE = \033[38;5;225m
GREEN = \e[0;32m
RETURN = \033[K
UP = \033[A
DEF = \033[0m

#################### PRESETTINGS ####################

NAME	= libft.a
OBJS = ${SRCS_LIBFT:.c=.o} ${SRCS_FT_PRINTF:.c=.o} ${SRCS_GNL:.c=.o} 

#################### SOURCES / OBJECTS ####################

LIBFT_PATH = ./libft/
SRCS_LIBFT = $(addprefix ${LIBFT_PATH}, ft_isalpha.c ft_isdigit.c ft_isalnum.c \
			ft_isascii.c ft_isprint.c ft_strlen.c \
			ft_memset.c ft_bzero.c ft_memcpy.c \
			ft_memmove.c ft_strlcpy.c ft_strlcat.c \
			ft_toupper.c ft_tolower.c ft_strchr.c \
			ft_strrchr.c ft_strncmp.c ft_memchr.c \
			ft_memcmp.c ft_strnstr.c ft_atoi.c \
			ft_calloc.c ft_strdup.c ft_substr.c \
			ft_strjoin.c ft_strtrim.c ft_split.c \
			ft_itoa.c ft_strmapi.c ft_striteri.c \
			ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
			ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
			ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
			ft_lstclear.c ft_putnbr_fd.c)

GNL_PATH = ./get_next_line/
SRCS_GNL = $(addprefix $(GNL_PATH), get_next_line.c \
									get_next_line_utils.c)

FT_PRINTF_PATH = ./ft_printf/
SRCS_FT_PRINTF = $(addprefix $(FT_PRINTF_PATH), ft_parscheck.c \
												ft_my_fonctions.c \
												ft_printf.c)

#################### COMPILER ####################
CC = cc
CFLAGS = -Wall -Wextra -Werror

#################### RULES ####################
all :		$(NAME)

%.o:%.c
	@${CC} ${CFLAGS} -c -I ./inc $< -o $@
	@printf "${PURPLE}Compiling libft$<${RETURN}\n${DEF}"
	@printf "${UP}"

${NAME}: ${OBJS}
	@ar crs ${NAME} ${OBJS}
	@echo "\n---------------------------------------------"


clean:
	@rm -rf $(OBJS)

fclean:	
	@${MAKE} clean
	@rm -rf ${NAME}

re:	fclean all

.PHONY:	all clean fclean re

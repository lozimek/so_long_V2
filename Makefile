################### COLORS ######################
DEF = \033[0m
UP = \033[A
RETURN = \033[K
PURPLE = \033[38;5;225m
YELLOW = \033[38;5;226m
GREEN = \e[0;32m
BLUE = \033[38;5;117m

#################### PRESETTINGS ####################
NAME = so_long
OBJS = $(SRCS:.c=.o)
LIBFT_DIR = ./Libft/
LIBFT = $(LIBFT_DIR)/libft.a
FRAMEWORKS = -Lmlx -lmlx -lXext -lX11 -lm
RM = rm -rf

#################### SOURCES ##################
SRCS = so_long.c error.c check_map.c config_game.c

#################### COMPILER ####################
CC = cc
CFLAGS = -Wextra -Wall -Werror -Imlx

ifndef DEBUG
	CFLAGS += -fsanitize=address -g
endif

%.o:%.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@printf "${PURPLE}Compiling $<${RETURN}\n${DEF}"
	@printf "${UP}"

#################### RULES ####################
all: $(NAME)

$(NAME): $(OBJS)
	@${MAKE} -s -C $(LIBFT_DIR)
	@$(CC) $(CFLAGS) $(OBJS) -lmlx $(FRAMEWORKS) $(LIBFT) -o $(NAME)
	@printf "${YELLOW}       All files compiled successfully${DEF}"
	@echo "\n---------------------------------------------".
	@printf "\n${GREEN}        [SO_LONG IS NOW READY ! ✨]\n${DEF}\n"
	@echo "---------------------------------------------"

clean:
	@make -s -C $(LIBFT_DIR) clean
	@rm -rf $(OBJS)

fclean: clean
	@make -s -C $(LIBFT_DIR) fclean
	@rm -rf $(NAME)

debug:
	@${MAKE} DEBUG=1

re: fclean all

.PHONY: all clean fclean re debug
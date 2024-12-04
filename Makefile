
NAME = so_long
SRC = so_long.c
OBJ = $(SRC:.c=.o)

#################### COMPILER ####################

CC = cc
CFLAGS = -Wextra -Wall -Werror -Imlx
RM = rm -rf

################## DEBUGGER ######################

ifeq ($(DEBUG), 1)
	D_FLAG =	-g
endif

ifeq ($(SANITIZE), 1)
	D_FLAG =	-fsanitize=leak -g
endif

#################### RULES ####################

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME) -Lmlx -lmlx -lXext -lX11 -lm

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
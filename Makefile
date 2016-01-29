NAME = fillit
CC = gcc

FLAGS = -Wall
FLAGS += -Wextra
FLAGS += -Werror
FLAGS += -g

LIB = build/libft.a

SRC += control_part1.c
SRC += control_part2.c
SRC += set_data.c
SRC += clean.c
SRC += check_valid.c
SRC += stylised_output.c
SRC += add_element.c
SRC += solver.c
SRC += map_handling.c
SRC += core.c
SRC += error.c
SRC += main.c
# SRC += tool.c
SRC := $(addprefix srcs/, $(SRC))

OBJ_SRC = $(SRC:.c=.o)

GREEN = "\033[1;92m"
NONE = "\033[0m"

.SILENT:

all: $(OBJ_SRC)
	echo "-- Creating $(NAME) ..."
	$(CC) $(FLAGS) $^ $(LIB) -o bin/$(NAME)
	echo $(GREEN)"Done."$(NONE)

%.o:%.c
	@$(CC) $(FLAGS) -I ./includes/ -c $< -o $@

clean:
	echo "-- Cleaning .o files ..."
	/bin/rm -f $(OBJ_SRC)
	echo $(GREEN)"Done."$(NONE)

fclean: clean
	echo "-- Removing binary ..."
	/bin/rm -f ./bin/$(NAME)
	echo $(GREEN)"Done."$(NONE)

re: fclean all













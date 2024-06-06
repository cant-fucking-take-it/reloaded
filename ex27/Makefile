OBJ_FILES = entrypoint.o

OUT = ft_display_file

CC = cc
CFLAGS = -Wall -Wextra -Werror

all:  $(OUT)

$(OUT): $(OBJ_FILES)
	$(CC) $(CFLAGS) $(OBJ_FILES) -o $(OUT)

$(OBJ_FILES): %.o:%.c 

clean reclean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(OUT)

re: fclean all reclean

.PHONY: all fclean all reclean re

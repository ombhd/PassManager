NAME = PassManager

LIB = libpass.a

MAIN = pass_manager.c

FILES = $(wildcard ./srcs/*.c)

HEADER = ./includes/pass_manager.h

OBJECT = $(FILES:.c=.o)


all: $(NAME)

$(NAME): $(OBJECT) $(HEADER)
	@mv *.o ./srcs
	@ar -rcs $(LIB) $(OBJECT)
	@gcc $(MAIN) $(LIB) -o $(NAME)
	@echo "\n\033[32m------- PassManager has been created successfully -------\033[0m\n"

bonus: all

%.o:%.c	$(HEADER)									
	@gcc -c $< $(FLAGS) 

clean:
	@rm -rf srcs/*.o $(LIB)
	@echo "\n\033[36mCleaning objects Done!\033[0m\n"

fclean: clean
	@rm -rf $(NAME)

re : fclean all


##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## A Makefile to compile push_swap
##

NAME	=	push_swap

SRC	=	source/main.c\
		source/error_detection.c\
		source/my_getnbr.c

OBJ	=	$(SRC:.c=.o)

NAME_TESTS = 	test_push_swap

SRC_TESTS =	source/error_detection.c\
			source/my_getnbr.c\
			tests/test_detect_errors.c\

OBJ_TESTS	=	$(SRC_TESTS:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
			gcc -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)
		rm -f $(OBJ_TESTS)

fclean: clean
		rm -f $(NAME)
		rm -f $(NAME_TESTS)
		rm -f *.gcno
		rm -f *.gcda

re:	fclean all

tests_run: 	$(OBJ_TESTS)
			gcc -o $(NAME_TESTS) $(OBJ_TESTS) --coverage -lcriterion
			./$(NAME_TESTS)
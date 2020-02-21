##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## A Makefile to compile push_swap
##

NAME	=	push_swap

SRC	=	source/main.c\
		source/error_detection.c\
		source/get_list.c\
		source/display_sorting.c\
		source/operations.c

OBJ	=	$(SRC:.c=.o)

NAME_TESTS	=	test_push_swap

SRC_TESTS	=	source/error_detection.c\
				source/get_list.c\
				source/display_sorting.c\
				source/operations.c\
				tests/test_detect_errors.c\
				tests/test_get_list_a.c\
				tests/test_my_getnbr.c\
				tests/test_get_list_b.c\
				tests/test_display_sorting.c\
				tests/test_is_sorted.c\
				tests/test_remove_smaller_int.c\
				tests/test_get_index_smaller_int.c\
				tests/test_pushswap_ra.c\
				tests/test_pushswap_pb.c\
				tests/test_pushswap_pa.c

OBJ_TESTS	=	$(SRC_TESTS:.c=.o)

CFLAGS	+=	-Wall -Wextra -Iinclude

all:	$(NAME)

$(NAME):	$(OBJ)
			gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
		rm -f $(OBJ)
		rm -f $(OBJ_TESTS)

fclean:	clean
		rm -f $(NAME)
		rm -f $(NAME_TESTS)
		rm -f *.gcno
		rm -f *.gcda

re:	fclean all

tests_run:	$(SRC_TESTS)
			rm -f *.gcno
			rm -f *.gcda
			gcc -o $(NAME_TESTS) $(SRC_TESTS) $(CFLAGS) --coverage -lcriterion
			./$(NAME_TESTS)
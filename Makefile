# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmsimang <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/04 16:24:49 by bmsimang          #+#    #+#              #
#    Updated: 2018/09/04 16:25:08 by bmsimang         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = gcc -Wall -Wextra -Werror -o
NAME = checker
NAME2 = push_swap

SRC =	checker_src/checker.c\

SRC2 = 	push_swap_src/push_swap.c\
		push_swap_src/ps_sort_1.c\
		push_swap_src/ps_sort_2.c\
		push_swap_src/ps_sort_3.c\
		push_swap_src/ps_sort_4.c\
		push_swap_src/ps_sort_5.c\

SRC3 =	helpers_src/commands_1.c\
		helpers_src/commands_2.c\
		helpers_src/commands_3.c\
		helpers_src/helper_1.c\
		helpers_src/set_stacks.c\
		helpers_src/validators.c\

all: $(NAME) $(NAME2)
$(NAME):
	@$(MAKE) -C libft/ re
	$(CFLAGS) $(NAME) $(SRC) $(SRC3) -L libft/ -lft

$(NAME2):
	$(CFLAGS) $(NAME2) $(SRC2) $(SRC3) -L libft/ -lft

clean:
	@$(MAKE) -C libft/ clean

fclean: fclean
	rm -f $(NAME) $(NAME2)
	@$(MAKE) -C libft/ fclean

re: fclean all

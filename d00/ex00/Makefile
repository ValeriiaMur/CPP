# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: valeriiamuradian <valeriiamuradian@stud    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/19 13:05:00 by valeriiamur       #+#    #+#              #
#    Updated: 2019/10/21 09:14:01 by valeriiamur      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Megaphone

SRC		=  megaphone.cpp
CFLAG	=  -Wall -Wextra -Wunused -Werror

all: $(NAME)

$(NAME):
	g++ $(CFLAG) $(SRC) -o $(NAME)

clean:

fclean: clean
	/bin/rm -f $(NAME)
	@echo "Clean!"

re:     fclean all
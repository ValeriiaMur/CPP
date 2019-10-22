# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: valeriiamuradian <valeriiamuradian@stud    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/19 13:05:37 by valeriiamur       #+#    #+#              #
#    Updated: 2019/10/21 21:17:53 by valeriiamur      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= awesome_phonebook

SRCS     = Contact.Class.cpp AddContact.cpp ShowContact.cpp main.cpp 
HDRS     = Contact.Class.hpp
OBJS     = $(SRCS:.cpp=.o)
FLAGS 	 = -Wall -Wextra -Wunused -Werror


all: $(NAME)
$(NAME): $(OBJS) $(HDRS)
	g++ $(FLAGS) $(OBJS) -o $(NAME)

clean:
	@rm -f $(OBJS)
	@echo "All Objects removed!"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) also removed!"

re:     fclean all

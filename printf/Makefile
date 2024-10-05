# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: huakbas <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/05 17:57:44 by huakbas           #+#    #+#              #
#    Updated: 2024/10/05 17:57:47 by huakbas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



CFLAGS := -Wall -Wextra -Werror

SRCFILES := ft_printf.c

#BONUSFILES := 

OBJECTFILES := $(SRCFILES:.c=.o)

#BONUSOBJECTFILES := $(BONUSFILES:.c=.o)

NAME := libftprintf.a

all: ${NAME}

${NAME}: ${OBJECTFILES}
	ar rcs $@ ${OBJECTFILES}

${OBJECTFILES}: ${SRCFILES}
	cc -g -c $(CFLAGS) ${SRCFILES}

${BONUSOBJECTFILES}: ${BONUSFILES}
	cc -g -c $(CFLAGS) ${BONUSFILES}

bonus: ${NAME} ${BONUSOBJECTFILES}
	ar rs ${NAME} ${BONUSOBJECTFILES}

clean:
	rm -f ${OBJECTFILES}

fclean: clean
	rm -f $(NAME)
	
re: fclean all

show:
	ar -tv ${NAME}

.PHONY: all clean fclean re show
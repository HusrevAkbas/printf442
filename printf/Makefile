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
LIBFT = libft
LIBFTA = libft/libft.a

NAME := libftprintf.a

all: ${NAME}

#	FIND OUT HOW TO INCLUDE LIBFT ???

${NAME}: ${OBJECTFILES} ${LIBFT}
	ar rcs $@ ${OBJECTFILES}

${LIBFTA} :
	${MAKE} -C ${LIBFT} bonus

${OBJECTFILES}: ${SRCFILES} ${LIBFTA}
	cc -g -c ${CFLAGS} ${SRCFILES}
# -L ${LIBFT} -lft

${BONUSOBJECTFILES}: ${BONUSFILES}
	cc -c $(CFLAGS) ${BONUSFILES}

#bonus: ${NAME} ${BONUSOBJECTFILES}
#	ar rs ${NAME} ${BONUSOBJECTFILES}

clean:
	${MAKE} -C ${LIBFT} clean
	rm -f ${OBJECTFILES}

fclean: clean
	${MAKE} -C ${LIBFT} fclean
	rm -f $(NAME)
	
re: fclean all

show:
	ar -tv ${NAME}

.PHONY: all clean fclean re show
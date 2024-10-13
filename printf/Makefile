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

SRCFILES := ft_printf.c ft_handle_convertion_identifiers.c ft_itobase.c \
ft_get_const.c ft_itobase_ul.c 

#BONUSFILES := 

OBJECTFILES := $(SRCFILES:.c=.o)

#BONUSOBJECTFILES := $(BONUSFILES:.c=.o)
LIBFT = libft
LIBFTA = checklibft

NAME := libftprintf.a

LFTOBJECTFILES = libft/*.o

all: ${NAME}

#	FIND OUT HOW TO INCLUDE LIBFT ???

${NAME} : ${OBJECTFILES} ${LIBFTA}
	ar rcs $@ ${OBJECTFILES} ${LFTOBJECTFILES}

${LIBFTA} :
	${MAKE} -C ${LIBFT} bonus extract
	touch ${LIBFTA}

${OBJECTFILES} : ${SRCFILES} ${LIBFTA}
	cc -g -c ${CFLAGS} ${SRCFILES}
# -L ${LIBFT} -lft

#${BONUSOBJECTFILES} : ${BONUSFILES}
#	cc -c $(CFLAGS) ${BONUSFILES}

#bonus: ${NAME} ${BONUSOBJECTFILES}
#	ar rs ${NAME} ${BONUSOBJECTFILES}

clean:
	${MAKE} -C ${LIBFT} clean
	rm -f ${OBJECTFILES} ${LIBFTA}

fclean: clean
	${MAKE} -C ${LIBFT} fclean
	rm -f $(NAME)
	
re: fclean all

show:
	ar -tv ${NAME}

.PHONY: all clean fclean re show
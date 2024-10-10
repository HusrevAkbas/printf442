# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: huakbas <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/05 15:24:31 by huakbas           #+#    #+#              #
#    Updated: 2024/10/05 15:24:34 by huakbas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS := -Wall -Wextra

PRINTF := printf

TARGET := test

SRC := $(wildcard test*/*.c)# $(wildcard tests_bonus/*.c)

all:
	$(MAKE) -C ${PRINTF} all
#	valgrind -s --leak-check=full --show-leak-kinds=all 
	cc -g ${CFLAGS} ${SRC} test.c -L ${PRINTF} -lftprintf -o ${TARGET}
	./${TARGET}

clean:
	$(MAKE) -C ${PRINTF} clean
	rm -f test

fclean:
	$(MAKE) -C ${PRINTF} fclean
	rm -f test

show:
	$(MAKE) -C ${PRINTF} show

val:
	${MAKE} -C ${PRINTF} all
	cc -g ${CFLAGS} ${SRC} test.c -L ${PRINTF} -lftprintf -o ${TARGET}
	valgrind -s --leak-check=yes --show-leak-kinds=all --track-origins=yes ./test

run:
	./${TARGET}


#BONUSFILES := $(wildcard *bonus.c)
#SRCFILES := $(wildcard ft*.c)

#%.o : %.c
#	cc -c $(CFLAGS) $< -o $@

#libft: $(SRCFILES) clean
#	cc $(CFLAGS) -c $(SRCFILES) -o %.o
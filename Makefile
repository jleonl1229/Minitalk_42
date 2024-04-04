# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jleon-la <jleon-la@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/03 12:46:38 by jleon-la          #+#    #+#              #
#    Updated: 2024/04/03 12:47:45 by jleon-la         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC						= cc
NAME 					= minitalk
NAME_CLIENT				= client
NAME_SERVER				= server
CFLAGS					= -Wall -Wextra -Werror
LDFLAGS					= -L./libft -lft
SRC_CLIENT 				= client.c
SRC_SERVER 				= server.c

${NAME}: all

all:
	make -C ./libft
	make ${NAME_CLIENT}
	make ${NAME_SERVER}

${NAME_CLIENT}: ${SRC_CLIENT}
	echo "client"
	${CC} ${CFLAGS} ${SRC_CLIENT} -o ${NAME_CLIENT} ${LDFLAGS}

${NAME_SERVER}: ${SRC_SERVER}
	echo "server"
	${CC} ${CFLAGS} ${SRC_SERVER} -o ${NAME_SERVER} ${LDFLAGS}

clean:
	rm -rf *.o
	rm -rf tags
	make -C libft clean

fclean: 
	make clean
	rm -rf ${NAME_SERVER} ${NAME_CLIENT}
	make -C libft fclean

re:
	make fclean 
	make all

.PHONY: all clean fclean re

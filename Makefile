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

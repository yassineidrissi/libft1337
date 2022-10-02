SRC_B = 
OBG_B = 
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
 ft_strlen.c
OBG = ${SRC:.c=.o} 
NAME = libft.a
RM = rm -rf
AR = ar -rc
GFLAG = -Wall -Wextra -Werror
CC = gcc

1337_logo:
	
	@echo "\033[92m░░███╗░░██████╗░██████╗░███████╗\033[0m███╗░░░███╗███████╗██████╗░"
	@echo "\033[92m░████║░░╚════██╗╚════██╗╚════██║\033[0m████╗░████║██╔════╝██╔══██╗"
	@echo "\033[92m██╔██║░░░█████╔╝░█████╔╝░░░░██╔╝\033[0m██╔████╔██║█████╗░░██║░░██║"
	@echo "\033[92m╚═╝██║░░░╚═══██╗░╚═══██╗░░░██╔╝░\033[0m██║╚██╔╝██║██╔══╝░░██║░░██║"
	@echo "\033[92m███████╗██████╔╝██████╔╝░░██╔╝░░\033[0m██║░╚═╝░██║███████╗██████╔╝"
	@echo "\033[92m╚══════╝╚═════╝░╚═════╝░░░╚═╝░░░\033[0m╚═╝░░░░░╚═╝╚══════╝╚═════╝░"

%.o : %.c
		${CC} ${GFLAG} -c $< -o $@

${NAME} : ${OBG}
		${AR} $@ ${OBG}

all: ${NAME} 1337_logo

re: fclean all

clean:
	@${RM} ${OBG} {OBG_B}
	@echo "cleannig the objects"
fclean: clean 
	${RM} ${NAME}

.PHONY: all re clean fclean
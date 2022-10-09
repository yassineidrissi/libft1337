NAME = libft.a
SRC_B = ft_lstnew.c ft_lstsize.c ft_lstadd_front.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c\
 ft_putendl_fd.c ft_putnbr_fd.c ft_lstadd_front.c
RM = rm -rf
AR = ar -rc 
CC = gcc
FLAG = -Wall -Wextra -Werror
OBG = ${SRC:.c=.o}
OBG_B = ${SRC_B:.c=.o}

%.o : %.c
	@${CC} ${FLAG} -c $< -o $@

${NAME} : ${OBG}
	@${AR} ${NAME} ${OBG}

all : ${NAME} 1337_logo

	@echo "\033[92m░░███╗░░██████╗░██████╗░███████╗\033[0m███╗░░░███╗███████╗██████╗░"
	@echo "\033[92m░████║░░╚════██╗╚════██╗╚════██║\033[0m████╗░████║██╔════╝██╔══██╗"
	@echo "\033[92m██╔██║░░░█████╔╝░█████╔╝░░░░██╔╝\033[0m██╔████╔██║█████╗░░██║░░██║"
	@echo "\033[92m╚═╝██║░░░╚═══██╗░╚═══██╗░░░██╔╝░\033[0m██║╚██╔╝██║██╔══╝░░██║░░██║"
	@echo "\033[92m███████╗██████╔╝██████╔╝░░██╔╝░░\033[0m██║░╚═╝░██║███████╗██████╔╝"
	@echo "\033[92m╚══════╝╚═════╝░╚═════╝░░░╚═╝░░░\033[0m╚═╝░░░░░╚═╝╚══════╝╚═════╝░"
	@echo "\033[92mCREATING .O FILES AND LIBFT.A✅\033[0m"

clean :
	@${RM} ${OBG} ${OBG_B}
	@echo "\033[31mDELETE .O FILES🗑\033[0m"

fclean : clean
	@${RM} ${NAME}
	@echo "\033[31mDELETE LAST LIBFT.A🗑\033[0m"

re : fclean all

bonus : ${OBG_B}
	@${AR} ${NAME} ${OBG_B}
	@echo "\033[92mCREATING LIBFT.A FOR BONUS✅\033[0m"

.PHONY : all clean fclean re bonus 1337_logo
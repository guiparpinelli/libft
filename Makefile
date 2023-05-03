# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gparpine <gparpine@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/18 20:47:04 by gparpine          #+#    #+#              #
#    Updated: 2023/05/03 12:56:25 by gparpine         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_atoi.c				  \
		  ft_bzero.c			  \
		  ft_calloc.c			  \
		  ft_isalnum.c			  \
		  ft_isalpha.c			  \
		  ft_isascii.c			  \
		  ft_isdigit.c			  \
		  ft_isprint.c			  \
		  ft_memchr.c			  \
		  ft_memcmp.c			  \
		  ft_memcpy.c			  \
		  ft_memmove.c			  \
		  ft_memset.c			  \
		  ft_strchr.c			  \
		  ft_strdup.c			  \
		  ft_strlcat.c			  \
		  ft_strlcpy.c			  \
		  ft_strlen.c			  \
		  ft_strncmp.c			  \
		  ft_strnstr.c			  \
		  ft_strrchr.c			  \
		  ft_tolower.c			  \
		  ft_toupper.c			  \
		  ft_substr.c			  \
		  ft_strjoin.c			  \
		  ft_strtrim.c			  \
		  ft_split.c			  \
		  ft_itoa.c				  \
		  ft_strmapi.c			  \
		  ft_striteri.c			  \
		  ft_putchar_fd.c		  \
		  ft_putstr_fd.c		  \
		  ft_putendl_fd.c		  \
		  ft_putnbr_fd.c		  \

BONUS	= ft_lstadd_back.c		  \
		  ft_lstadd_front.c		  \
		  ft_lstclear.c			  \
		  ft_lstdelone.c		  \
		  ft_lstiter.c			  \
		  ft_lstlast.c			  \
		  ft_lstmap.c			  \
		  ft_lstnew.c			  \
		  ft_lstsize.c			  \

SRCS_O	= ${SRCS:.c=.o}
BONUS_O = ${BONUS:.c=.o}
OBJS	= ${SRCS_O} ${BONUS_O}
NAME	= libft.a
LIB		= ar rc
RL		= ranlib
RM		= rm -f
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I*.h

${NAME}: ${SRCS_O}
		${LIB} ${NAME} ${SRCS_O}
		${RL} ${NAME}

all: ${NAME}

bonus: ${BONUS_O}
		${LIB} ${NAME} ${BONUS_O}
		${RL} ${NAME}

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all

norm:
		norminette -R CheckForbiddenSourceHeader *.c
		norminette -R CheckDefine *.h

.PHONY: all re clean fclean norm bonus

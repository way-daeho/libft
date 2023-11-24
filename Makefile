# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/16 00:08:30 by daehlee           #+#    #+#              #
#    Updated: 2023/11/24 21:02:35 by daehlee          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a

SRCS	:=	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
			ft_strncmp.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c\
			ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c\
			ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c\
			ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c\
			ft_toupper.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c\
			ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c\
			ft_putendl_fd.c ft_putnbr_fd.c
OBJS	:=	$(SRCS:.c=.o)

BSRC	:=	ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
BOBJS	:=	$(BSRC:.c=.o)

CC	:=	cc
CFLAGS	:=	-Wall -Wextra -Werror -c

ifdef PLUS_BONUS
		OBJF = $(OBJS) $(BOBJS)
else
		OBJF = $(OBJS)
endif

all	: $(NAME)

$(NAME) : $(OBJF)
	ar cr $@ $^

bonus :
		@make PLUS_BONUS=1 all

%.o : %.c
	$(CC) $(CFLAGS) $< -o $@

clean :
	rm -f $(OBJS) $(BOBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all bonus clean fclean re

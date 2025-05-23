# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hisasano <hisasano@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/04 19:47:43 by hisasano          #+#    #+#              #
#    Updated: 2025/05/06 14:24:10 by hisasano         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_isalpha.c ft_memcpy.c ft_strlcpy.c ft_toupper.c \
       ft_isascii.c ft_memmove.c ft_strlen.c \
       ft_atoi.c ft_isdigit.c ft_memset.c ft_strncmp.c \
       ft_bzero.c ft_isprint.c ft_strchr.c ft_strnstr.c \
       ft_calloc.c ft_memchr.c ft_strdup.c ft_strrchr.c \
       ft_isalnum.c ft_memcmp.c ft_strlcat.c ft_tolower.c \
       ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
       ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c\
       ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
       

BONUS_SRCS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c\
              ft_lstsize_bonus.c ft_lstlast_bonus.c\
              ft_lstadd_back_bonus.c ft_lstdelone_bonus.c\
              ft_lstclear_bonus.c ft_lstiter_bonus.c\
              ft_lstmap_bonus.c

OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

HEADERS = libft.h
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar

ifeq ($(filter bonus,$(MAKECMDGOALS)),bonus)
OBJS := $(OBJS) $(BONUS_OBJS)
endif

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) rcs $(NAME) $(OBJS)

bonus: $(NAME)

$(OBJS): $(HEADERS)

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus

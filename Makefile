# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmeei-we <pmeei-we@student.42kl.edu.m      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/27 15:54:35 by pmeei-we          #+#    #+#              #
#    Updated: 2026/07/30 12:03:26 by pmeei-we         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

CC	= cc
CFLAGS	= -Wall -Wextra -Werror

# Archiever Commands
AR	= ar rcs
RM	= rm -f

SRCS	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_touppper.c ft_tolower.c ft_memset.c ft_bzero.c ft_memcpy.c \
	ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c \
	ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strcmp.c \
	ft_atoi.c ft_calloc.c ft_strdup.c \

LINKED_SRCS	= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
		ft_lstmap.c

# Transform Source Files into Object File (.o)
OBJS		= $(SRCS:.c=.0)
LINKED_SRCS	= $(LINKED_SRCS:.c=.o)

# Default Rule (Compiles mandatory part)
all:	$(NAME)

# Rules to create the library binary
$(NAME):	$(OBJS)
	$(AR) $(NAME) $(OBJ)

# Rules to compile .c files into .o files
%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

# Target to compile bonus functions
bonus:	$(OBJS) $(BONUS_OBJS)
	$(AR) $(NAME) $(OBJS) $(BONUS_OBJS)

# Clean Object Files
clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

# Full Clean (Objects and Library binary)
fclean:	clean
	$(RM) $(NAME)

# Rebuild Everything from scratch
re:	fclean all

# Protect target names from matching file names
.PHONY:	all bonus clean fclean re

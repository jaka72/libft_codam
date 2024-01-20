# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jmurovec <jmurovec@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/29 18:54:57 by jmurovec      #+#    #+#                  #
#    Updated: 2021/11/17 12:40:19 by jmurovec      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME			= libft.a
CFLAGS			= -Wall -Wextra -Werror -I./includes

SRC_FOLDER		= src/
OBJ_FOLDER		= obj/

MANDATORY       = ft_bzero.c ft_memset.c ft_memchr.c ft_calloc.c ft_memcpy.c \
				ft_memccpy.c ft_memmove.c ft_memcmp.c ft_strlen.c \
				ft_strdup.c ft_strlcpy.c ft_strchr.c ft_strrchr.c \
				ft_strnstr.c ft_strncmp.c ft_isalpha.c ft_isalnum.c \
				ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c \
				ft_strmapi.c ft_substr.c ft_strjoin.c ft_strtrim.c \
				ft_split.c ft_itoa.c ft_putstr_fd.c ft_putendl_fd.c \
				ft_putnbr_fd.c ft_strlcat.c ft_atoi.c ft_atof.c ft_isdigit.c \
				ft_putchar_fd.c

BONUS           = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
				ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c

MANDATORY_OBJS	= $(addprefix $(OBJ_FOLDER), $(MANDATORY:.c=.o))
BONUS_OBJS		= $(addprefix $(OBJ_FOLDER), $(BONUS:.c=.o))


$(OBJ_FOLDER)%.o: $(SRC_FOLDER)%.c
				mkdir -p $(OBJ_FOLDER)
				gcc ${CFLAGS} -g -c $< -o $@
#				gcc ${CFLAGS} -g -c $< -o $(notdir $@)
# 				gcc ${CFLAGS} -g -c $< -o $(OBJ_FOLDER)${<:.c=.o}

all:			$(NAME)

$(NAME):		$(MANDATORY_OBJS)
				ar rcs $(NAME) $(MANDATORY_OBJS)

# For Shared Libraries
# so:
# 				gcc -fPIC -Wall -Werror -Wextra -c libft.h $(MANDATORY) $(BONUS)
# 				gcc -shared -o libft.so $(MANDATORY_OBJS) $(BONUS_OBJS)

clean:
				rm -rf $(OBJ_FOLDER)

fclean:			clean
				rm -rf $(NAME)

re:				fclean $(NAME)

bonus:			$(MANDATORY_OBJS) $(BONUS_OBJS)
				ar rcs $(NAME) $(OBJ_FOLDER)$(MANDATORY_OBJS) $(OBJ_FOLDER)$(BONUS_OBJS)

.PHONY:			all clean fclean re bonus

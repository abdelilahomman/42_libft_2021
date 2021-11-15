# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aomman <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/11 16:08:23 by aomman            #+#    #+#              #
#    Updated: 2021/11/15 15:49:16 by aomman           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS    = ft_bzero.c\
        ft_calloc.c\
        ft_isalpha.c\
        ft_isdigit.c\
        ft_isascii.c\
        ft_isalnum.c\
        ft_isprint.c\
        ft_memcpy.c\
        ft_memmove.c\
        ft_memset.c\
        ft_memchr.c\
        ft_memcmp.c\
        ft_strlcat.c\
        ft_strlcpy.c\
        ft_strlen.c\
        ft_strchr.c\
        ft_strdup.c\
        ft_strncmp.c\
        ft_strnstr.c\
        ft_strrchr.c\
        ft_substr.c\
        ft_atoi.c\
        ft_toupper.c\
        ft_tolower.c\
        ft_strjoin.c\
		ft_itoa.c\
		ft_split.c\
		ft_strtrim.c\
		ft_strmapi.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\

all        :
	gcc -Wall -Wextra -Werror libft.h -c ${SRCS}
	ar rc libft.a *.o
clean    :
	rm -f *.o
fclean    :	clean
	rm -f libft.a
re        :	fclean all



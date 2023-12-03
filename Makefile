# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evasco-o <evasco-o@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/03 10:03:12 by evasco-o          #+#    #+#              #
#    Updated: 2023/12/03 11:30:20 by evasco-o         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c ft_putchar_pf.c ft_putstr_pf.c ft_putnbr_pf.c\
		ft_puthex_pf.c 

OBJS = $(SRCS:.c=.o)
#OBJS = $(addsuffix .c ,$(SRCS))
CC = gcc
CCFLAGS = -Wall -Wextra -Werror
RM = rm -f
LIBFTNAME = libft.a
LIBFTDIR = ./Libft/
#COMPLETLIBFT = $(addsuffix $(LIBFTDIR) ,$(LIBFTNAME)) 
COMPLETLIBFT = $(addprefix $(LIBFTDIR),$(LIBFTNAME)) 
NAME = libftprintf.a
INCLUDE = ft_printf.h

%.o:%.c $(INCLUDE)
	$(CC) $(CCFLAGS) -c $< -o $@

all: makelibft $(NAME)

makelibft:
	make -C $(LIBFTDIR)	
#	cp -p $(LIBFTNAME) $(NAME)

$(NAME): $(COMPLETLIBFT) $(OBJS)
	cp $(COMPLETLIBFT) $(NAME)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)
	cd $(LIBFTDIR) && make clean

fclean: clean
	$(RM) $(NAME)
	cd $(LIBFTDIR) && make fclean

re: fclean all

printvar:
	@echo variables objeto $(OBJS) 
	@echo nombre libft $(LIBFTDIR) $(LIBFTNAME) -- $(COMPLETLIBFT)

.PHONY: all makelibft clean fclean re

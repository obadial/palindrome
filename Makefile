##
## Makefile for Makefile in /home/obadia_l/Piscine_de_synthese/Palindrome/palindrome
## 
## Made by lucas obadia
## Login   <obadia_l@epitech.net>
## 
## Started on  Thu Jun 16 11:06:36 2016 lucas obadia
## Last update Sat Jun 18 11:27:49 2016 lucas obadia
##

cc	= gcc

RM	= rm -f

NAME	= palindrome

SRCS	= main.c		\
	  lib/libc.c		\
	  src/get_div.c		\
	  src/params.c		\
	  src/params2.c		\
	  src/opt_h.c		\
	  src/init_struct.c	\
	  src/check_info.c	\
	  lib/libc2.c

OBJS	= $(SRCS:.c=.o)

CFLAGS	+= -I./include
CFLAGS	+= -Wall -Wextra -Werror

all:	$(OBJS)
	$(CC) $(OBJS) -o $(NAME) $(CFLAGS)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

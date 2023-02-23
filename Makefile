# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/21 10:34:25 by nde-la-f          #+#    #+#              #
#    Updated: 2023/02/22 09:05:32 by nde-la-f         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#---------------------------------------------------#
#                   LIBFT MAKEFILE     				#
#---------------------------------------------------#

# Name of the output library
NAME = libft.a

# Name of the output library for bonus
NAME_BONUS = .bonus

# Define some color codes for pretty printing
RED = \033[91m
YELLOW = \033[93m
WHITE = \033[97m
GREEN = \033[92m
DEF_CL = \033[m
CYAN = \033[96m

#---------------------------------------------------#
#                   COMPILER SETTINGS               #
#---------------------------------------------------#

# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -Werror

# Command to remove files
RM = rm -f

# Command to run norminette
NORM = norminette -R CheckForbiddenSourceHeader .

# Command to create a library archive
AR = ar -rcs

#---------------------------------------------------#
#                   SOURCE FILES					#
#---------------------------------------------------#

# Header file
HEADER = libft.h

# Source files
SRC    = ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isdigit.c ft_isprint.c  \
ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_strmapi.c ft_itoa.c \
ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

# Bonus source files
BONUS  = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

# Object files generated from source files
OBJ    = $(SRC:.c=.o)

# Object files generated from bonus source files
OBJ_BONUS = ${BONUS:.c=.o}

# Dependencies generated from source files
DEPS   = $(SRC:.c=.d)

# Dependencies generated from bonus source files
DEPS_BONUS = $(BONUS:.c=.d)

#---------------------------------------------------#
#                   OBJECT FILES					#
#---------------------------------------------------#

# Rule to generate an object file from a C source file
%.o: %.c Makefile
	@$(CC) $(CFLAGS) -MMD -I./ -c $< -o $@
	@echo "$(CYAN)Compiling: $(CYAN)$<$(DEF_CL) $(GREEN)[OK]$(DEF_CL)"

#---------------------------------------------------#
#                   MAIN TARGET   					#
#---------------------------------------------------#

# Default rule to build the main library
all: $(NAME)

# Include dependencies for all source files
-include $(DEPS)

# Rule to build the main library
$(NAME): $(OBJ)
	@$(AR) $(NAME) $(OBJ)
	@echo "Compilation $(GREEN) Completed ! $(DEF_CL)"

# Rule to build the bonus library
bonus: $(NAME_BONUS)

# Include dependencies for all bonus source files
-include $(DEPS_BONUS)

# Rule to build the bonus library
$(NAME_BONUS): $(OBJ) ${OBJ_BONUS}
	@$(AR) $(NAME) $(OBJ) $(OBJ_BONUS)
	@touch .bonus
	@echo "Compilation with $(YELLOW)bonus $(GREEN)completed!$(DEF_CL)"

#---------------------------------------------------#
#                    CLEANING   					#
#---------------------------------------------------#

# Rule to clean up object files and dependencies
clean:
	@$(RM) $(OBJ) $(OBJ_BONUS)
	@echo "$(CYAN)	Deleted objects: $(RED)$(OBJ) $(OBJ_BONUS) $(DEF_CL)"
	@$(RM) $(DEPS) $(DEPS_BONUS)
	@echo "$(CYAN)	Deleted dependencies: $(RED)$(DEPS) $(DEPS_BONUS) $(DEF_CL)"

#Rule to remove the compiled library file and cleaned object files
fclean: clean
	@$(RM) $(NAME)
	@echo "$(CYAN)	DELETED: $(RED)$(NAME)$(DEF_CL)"

#---------------------------------------------------#
#               ADDITIONAL TARGET  					#
#---------------------------------------------------#

# Rule to completely rebuild the program from scratch
re: fclean all

# Rule to apply and print norminette
norm:
	@echo "$(YELLOW)Norminette says:$(DEF_CL)"
	@$(NORM)

# Rule to tell make that the listed targets do not correspond to actual files.
.PHONY: all bonus clean fclean re norm

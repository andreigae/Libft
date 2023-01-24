# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agae-mat <agae-mat@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/18 17:39:17 by agae-mat          #+#    #+#              #
#    Updated: 2023/01/24 12:40:42 by agae-mat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Nombre del programa (Libreria en este caso) a compiplar
NAME = libft.a

# ¿Que programa se utilizara para hacer la compilacion?
CC = gcc

# Los parametros que se le pasa al compilador (gcc -Wall -Wextra -Werror -o ..)
CFLAGS = -Wall -Werror -Wextra 

# Se declara una nueva variable SCRS que es igual al nombre de todos los archivos que cumple 
# cierta condicion -> Wildcard es una funccion interna de make que funciona 
# con una expresion regual buscando todos los archivo que acaban en *.c o 
# lo que se le indique y lo guarde en la variable SRCS
SOURCE = $(wildcard *.c)

# Se crea una nueva variable Objetos, esta variable tiene por contenido
# todos los valores de la variable anterior, pero que se reemplaza la extension .c por .o
# utilizando SRCS:.c=.o
OBJECTS = $(SOURCE:.c=.o)

#El primer comando que se ejecuta en la compilacion si no se pasa ninguna variable al make
# es decir se ejecuta libft.a
all: $(NAME)


# Objetivo: dependencias
#	   Instrucciones

# La aplicacion libft.a que sera compilada depende de los objects (los archivos .o)
# Para crear este archivo se utiliza la funcion ar, en vez de gcc etc, 
# esto crea un archivo .a, que es un archivo de biblioteca estática. 
# Una biblioteca estática es un conjunto de funciones o procedimientos que se pueden 
# llamar desde otro código. Estas funciones o procedimientos se compilan y se empaquetan 
# en un archivo único, con extensión .a, el cual puede ser vinculado con otros programas.

# "rcs" son los parametros que se le pasa a la fuccion ar

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

# Objetivo = borrar archivos (comando clean); Dependencias Ninguna; Orden a ejecutar rm -f
# Borra todos los archivos .o (los archivos compilados listos para ser incluidos en la app)
clean:
	rm -f $(OBJECTS)

# Borra el programa objetvo de este makefile (libft.a) y como dependencia usa clean
# Resultado final = Borra todos los objetos y el archivo final libft.a
fclean: clean
	rm -f $(NAME)

# Borra todo (los objetos, libft.a) y ejecuta all = hacer una compilacion limpia 
re: fclean all


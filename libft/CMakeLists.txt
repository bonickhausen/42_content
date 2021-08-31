cmake_minimum_required(VERSION 3.20)
project(libft C)

set(CMAKE_C_STANDARD 99)

add_executable(libft main.c ft_libc/ft_isalpha.c ft_libc/ft_isalpha.h ft_libc/ft_isdigit.c ft_libc/ft_isdigit.h ft_libc/libft.h ft_libc/ft_isalnum.c ft_libc/ft_isalnum.h ft_libc/ft_isascii.c ft_libc/ft_isascii.h ft_libc/ft_isprint.c ft_libc/ft_isprint.h ft_libc/ft_strlen.c ft_libc/ft_strlen.h ft_libc/ft_memset.c ft_libc/ft_memset.h)

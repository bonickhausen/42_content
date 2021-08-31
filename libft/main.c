#include <stdio.h>
#include "ft_libc/libft.h"

void printInt(int i)
{
    printf("%i", i);
}

void printString(char * str)
{
    printf("%s", str);
}

void ft_isalpha_test()
{
    int ret = ft_isalpha('c');
    printInt(ret);
}

void ft_isdigit_test()
{
    int ret = ft_isdigit(' ');
    printInt(ret);
}

void ft_isalnum_test()
{
    int ret = ft_isalnum(' ');
    printInt(ret);
}

void ft_isascii_test()
{
    int ret = ft_isascii(' ');
    printInt(ret);
}

void ft_isprint_test()
{
    int ret = ft_isprint(19);
    printInt(ret);
}

void ft_strlen_test()
{
    int ret = ft_strlen("1");
    printInt(ret);
}

void ft_memset_test()
{
    char frase[] = "aeiouBLABLABLA";
    ft_memset(frase, '5', 3);
    printString(frase);
}

void ft_bzero_test()
{
    char frase[] = "aeiouBLABLABLA";
    ft_bzero(frase, 3);
    printString(frase);
}

void ft_memcpy_test()
{
    char str1[] = "bolacha";
    char str2[] = "FFF";
    printString(str1);
    printf("\n");
    ft_memcpy(str1, str2, 10);
    printString(str1);
}

void ft_memmove_test()
{
    char str1[] = "bolacha";
    char str2[] = "FFF";
    printString(str1);
    printf("\n");
    ft_memmove(str1, str2, 10);
    printString(str1);
}

int main()
{
    ft_memmove_test();
    return 0;
}

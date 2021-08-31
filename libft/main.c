#include <stdio.h>
#include "ft_libc/libft.h"

void printInt(int i)
{
    printf("%i", i);
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

int main()
{
    ft_isalnum_test();
    return 0;
}

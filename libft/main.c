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

int main()
{
    ft_isdigit_test();
    return 0;
}

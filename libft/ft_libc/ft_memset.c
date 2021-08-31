//
// Created by camir on 8/31/2021.
//

#include "ft_memset.h"

void *ft_memset(void *str, int c, size_t n)
{
    char *casted = (char *)str;
    int counter = 0;
    while (counter < n)
    {
        casted[counter] = c;
        counter++;
    }
    return str;
}

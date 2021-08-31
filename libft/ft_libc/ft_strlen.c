//
// Created by camir on 8/31/2021.
//
#include "ft_strlen.h"

int ft_strlen(const char * str)
{
    unsigned int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }

    return length;
}

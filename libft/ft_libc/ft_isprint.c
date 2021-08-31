//
// Created by camir on 8/31/2021.
//

int ft_isprint(int c)
{
    if (c >= 32 && c <= 127) return 1;
    return 0;
}

#include "ft_isprint.h"

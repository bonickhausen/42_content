//
// Created by camir on 8/31/2021.
//

int ft_isalpha(int c)
{
    int minAsciiRangeUppercase = 65;
    int maxAsciiRangeUppercase = 90;
    int minAsciiRangeLowercase = 97;
    int maxAsciiRangeLowercase = 122;

    if (c >= minAsciiRangeUppercase && c <= maxAsciiRangeUppercase)
    {
        return 1;
    }
    if (c >= minAsciiRangeLowercase && c <= maxAsciiRangeLowercase)
    {
        return 1;
    }
    return 0;
}

#include "ft_isalpha.h"

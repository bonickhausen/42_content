//
// Created by camir on 8/31/2021.
//

#include "ft_memcpy.h"

void *ft_memcpy(void *dest, const void * src, size_t n)
{
    int destLength = ft_strlen(dest);
    int srcLength  = ft_strlen(src);
    char* destString = (char*)dest;
    char* srcString = (char*)src;

    int counter = 0;
    while (counter < n)
    {
        destString[counter] = srcString[counter];
        counter++;
    }

    return dest;
}

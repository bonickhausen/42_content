//
// Created by camir on 8/31/2021.
//

#include "ft_memmove.h"

void *ft_memmove(void *dest, const void * src, size_t n)
{
    char *destString = (char *)dest;
    char *srcString = (char *)src;

    int destLength = ft_strlen(destString);
    int srcLength = ft_strlen(srcString);

    int counter = 0;

    if (destLength < srcLength)
    {
        while (counter < n)
        {
            destString[counter] = srcString[counter];
            counter++;
        }
    }
    else
    {
        counter = n;
        while (counter >= 0)
        {
            destString[counter] = srcString[counter];
            counter--;
        }
    }

    return dest;
}

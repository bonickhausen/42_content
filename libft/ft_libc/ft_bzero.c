//
// Created by camir on 8/31/2021.
//

#include "ft_bzero.h"
#include "ft_memset.h"

void ft_bzero(void *s, size_t n)
{
    ft_memset(s, '\0', n);
}
//
// Created by camir on 8/31/2021.
//

#include "ft_isalnum.h"
#include "ft_isdigit.h"
#include "ft_isalpha.h"

int ft_isalnum(int c)
{
    if (ft_isdigit(c) || ft_isalpha(c)) return 1;
    return 0;
}

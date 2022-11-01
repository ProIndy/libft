#include "includes/libft.h"

size_t  ft_array_size(const void **array)
{
    size_t  i;

    i = 0;
    while (array[i])
        i++;
    return (i);
}
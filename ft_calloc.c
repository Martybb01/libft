#include "libft.h"

void *ft_calloc(size_t nitems, size_t size)
{
    void *ptr;

    ptr = (void *)malloc(nitems * size);
    if (ptr == NULL)
        return (NULL);
    ft_bzero(ptr, nitems * size);
    return (ptr);
}

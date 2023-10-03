#include "libft.h"

int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    i = 0;
    if (size == 0)
        return (ft_strlen(src));
    while (i < (size - 1))
    {
        dest[i] = src[i];
        i++;
    }
    if (i < size)
    {
        dest[i] = '\0';
    }
    return (ft_strlen(src));
}

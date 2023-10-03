#include "libft.h"

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int dest_len;
    unsigned int src_len;

    i = 0;
    dest_len = ft_strlen(dest);
    src_len = ft_strlen(src);

    if (size <= dest_len)
        src_len += size;
    else
        src_len += dest_len;

    while (src[i] != '\0' && (dest_len + 1) < size)
    {
        dest[dest_len] = src[i];
        dest_len++;
        i++;
    }
    dest[dest_len] = '\0';
    return (src_len);
}

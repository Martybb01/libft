#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char *dest2;
    unsigned char *src2;

    i = 0;
    dest2 = (unsigned char *)dest;
    src2 = (unsigned char *)src;

    if (src < dest)
    {
        i = n;
        while (i > 0)
        {
            i--;
            dest2[i] = src2[i];
        }
    }
    else
    {
        i = 0;
        ft_memcpy(dest2, src2, n);
    }
    return (dest);
}

// int main()
// {
//     char src[] = "Spiderman";
//     char dest[] = "boh";
//     size_t n = 3;

//     printf("src before memmove: %s\n", src);
//     printf("dest before memmove: %s\n", dest);
//     ft_memmove(dest, src, n);
//     printf("src after memmove: %s\n", src);
//     printf("dest after memmove: %s\n", dest);
//     return 0;
// }

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char *dest2;
    unsigned char *src2;

    i = 0;
    dest2 = (unsigned char *)dest;
    src2 = (unsigned char *)src;

    while (i < n)
    {
        dest2[i] = src2[i];
        i++;
    }
    return (dest);
}

// int main()
// {
//     char src[] = "bohfjeifueg";
//     char dest[] = "spiderman";
//     size_t n = 1;

//     printf("src before memcpy: %s\n", src);
//     printf("dest before memcpy: %s\n", dest);
//     ft_memcpy(dest, src, n);
//     printf("src after memcpy: %s\n", src);
//     printf("dest after memcpy: %s\n", dest);
//     return 0;
// }

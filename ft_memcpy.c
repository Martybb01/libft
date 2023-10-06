#include "libft.h"

void *memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char *dest2;
    unsigned char *src2;

    i = 0;
    dest2 = (unsigned char *)dest;
    src2 = (unsigned char *)src;

    if (!n || dest == src)
        return (dest);
    while (n--)
    {
        dest2[i] = src2[i];
        i++;
    }
    return (dest);
}

int main()
{
    char src[] = "ciao";
    char dest[] = "boh";
    size_t n = 3;

    printf("src before memcpy: %s\n", src);   // ciao
    printf("dest before memcpy: %s\n", dest); // boh
    memcpy(dest, src, n);
    printf("src after memcpy: %s\n", src);   // ciao
    printf("dest after memcpy: %s\n", dest); // cia
    return 0;
}

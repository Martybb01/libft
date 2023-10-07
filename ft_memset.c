#include "libft.h"

void *memset(void *s, int c, size_t n)
{
    size_t i;
    unsigned char *str;
    char zero;

    i = 0;
    str = (unsigned char *)s;
    zero = c;
    while (i < n)
    {
        str[i] = zero;
        i++;
    }
    return (str);
}

int main()
{
    char str[] = "Hello World!";
    char c = 'o';
    char *p;

    p = memset(str, c, 5);

    printf("%s", p);
    return 0;
}

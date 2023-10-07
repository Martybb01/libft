#include "libft.h"

void *memchr(const void *s, int c, size_t n)
{
    size_t i;
    char *str;

    i = 0;
    str = (char *)s;

    while (i < n)
    {
        if ((unsigned char)str[i] == (unsigned char)c)
            return (str + i); // str + i is the address of the first occurence of c
        i++;
    }
    return (NULL);
}

int main()
{
    char str[] = "Hello World!";
    char c = 'o';
    char *p;

    p = memchr(str, c, 5);

    printf("%s", p);
    return 0;
}

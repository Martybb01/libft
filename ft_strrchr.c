#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    size_t i;

    i = ft_strlen(s);
    while (i > 0)
    {
        if (s[i] == c)
            return (char *)s + i;
        i--;
    }
    if (s[i] == c)
        return (char *)s + i;
    return (NULL);
}

int main()
{
    char str[] = "Hello World ciao!";
    char c = 'o';
    char *p;

    p = ft_strrchr(str, c);

    printf("%s", p);
    return 0;
}
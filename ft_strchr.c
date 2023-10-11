#include "libft.h"
#include <string.h>

/* locates the first occurence of c (converted to char) in the string pointed to by s. The terminating null character is considered to be part of the string.
It returns a pointer to the located character, or NULL if the character doesn not appear in the string. */

char *ft_strchr(const char *s, int c)
{
    size_t i;

    i = 0;

    while (s[i] != '\0')
    {
        if (s[i] == c)
            return ((char *)s + i);
        i++;
    }
    if (s[i] == c)
        return ((char *)s + i);
    return (NULL);
}

// int main()
// {
//     char str[] = "Hello World!";
//     char c = 'W';
//     char *p;
//     char *p2;

//     p = ft_strchr(str, c);
//     p2 = strchr(str, c);

//     printf("%s", p);
//     printf("%s", p2);
//     return 0;
// }

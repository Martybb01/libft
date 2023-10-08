#include "libft.h"

/* Allocates (with malloc(3)) and returns a substring from the string ’s’.
The substring begins at index ’start’ and is of maximum size ’len’. */

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *str;

    if (!s)
        return (NULL);
    if (start > ft_strlen(s))
        return (ft_strdup(""));
    if (len > ft_strlen(s + start))
        len = ft_strlen(s + start);
    str = (char *)malloc(sizeof(*str) * (len + 1));
    if (!str)
        return (NULL);
    ft_memcpy(str, s + start, len);
    str[len] = '\0';
    return (str);
}

// int main()
// {
//     char s[] = "Hello World!";
//     char *p;

//     p = ft_substr(s, 0, 3);
//     printf("%s", p);
//     return 0;
// }

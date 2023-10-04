#include "libft.h"
#include <stdio.h>

char *ft_strnstr(const char *bigstr, const char *smallstr, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    if (smallstr[i] == '\0')
        return ((char *)bigstr);
    while (bigstr[i] != '\0' && i < len)
    {
        j = 0;
        while (bigstr[i + j] == smallstr[j] && (i + j) < len)
        {
            if (smallstr[j + 1] == '\0')
                return ((char *)bigstr + i);
            j++;
        }
        i++;
    }
    return (NULL);
}

// int main()
// {
//     char bigstr[] = "ciao Hello mondo";
//     char smallstr[] = "Hello";

//     printf("%s", ft_strnstr(haystack, needle, 8));
//     return 0;
// }

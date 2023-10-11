#include "libft.h"
#include <string.h>

int ft_strncmp(char *s1, char *s2, size_t n)
{
    unsigned int i;
    if (!n)
        return (0);
    i = 0;
    while (s1[i] && s2[i] && s1[i] == s2[i] && i < n)
        i++;
    if (i < n)
        return (s1[i] - s2[i]);
    else
        return (0);
}

// int main()
// {
//     char *s1 = "This is a test string.";
//     char *s2 = "This is a different test string.";
//     size_t n = 10;

//     int result = ft_strncmp(s1, s2, n);
//     int result2 = strncmp(s1, s2, n);

//     if (result == 0 && result2 == 0)
//     {
//         printf("The strings are equal for the first %zu characters.\n", n);
//     }
//     else if (result < 0 && result2 < 0)
//     {
//         printf("The first string is less than the second string for the first %zu characters.\n", n);
//     }
//     else if (result > 0 && result2 > 0)
//     {
//         printf("The first string is greater than the second string for the first %zu characters.\n", n);
//     }
//     else
//     {
//         printf("The strings are not equal for the first %zu characters.\n", n);
//     }

//     return 0;
// }

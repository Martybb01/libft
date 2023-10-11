#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    unsigned int i;

    if (!s || !f)
        return;
    i = 0;
    while (s[i])
    {
        f(i, &s[i]);
        i++;
    }
}
/* &s[i]: A pointer to the current character in the string. This allows the function f to modify the character if needed.*/

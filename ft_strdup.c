#include "libft.h"

char *ft_strdup(char *src)
{
    char *dest;
    int i;
    int len;

    len = 0;
    while (src[len])
        len++;
    dest = malloc(sizeof(char) * (len + 1));

    if (!dest)
        return (NULL);

    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int main()
{
    char src[] = "ciao";
    char *dest;

    dest = ft_strdup(src);
    printf("src: %s\n", src);   // ciao
    printf("dest: %s\n", dest); // ciao
    return 0;
}

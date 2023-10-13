#include "libft.h"

// #include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return (str + i);
		i++;
	}
	return (NULL);
}

// int main()
// {
//     char str[] = "Hello World!";
//     char c = 'o';
//     char *p;
//     char *p2;

//     p = ft_memchr(str, c, 5);
//     p2 = memchr(str, c, 5);

//     printf("%s", p);
//     printf("%s", p2);
//     return (0);
// }

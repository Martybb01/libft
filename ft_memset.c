#include "libft.h"

// #include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	char			zero;

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

// int main()
// {
//     char str[] = "Hello World!";
//     char c = 'l';
//     char *p;
//     char *p2;

//     p = ft_memset(str, c, 5);
//     p2 = memset(str, c, 5);

//     printf("%s\n", p);
//     printf("%s", p2);
//     return (0);
// }

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	if (i < size)
	{
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}

// int main()
// {
//     char src[] = "Hello, world!";
//     char dest[10];
//     unsigned int len = ft_strlcpy(dest, src, 6);

//     printf("String dest is: %s", dest);    // String dest is: Hello
//     printf("Length of src is: %d\n", len); // Length of src is: 13
//     return (0);
// }

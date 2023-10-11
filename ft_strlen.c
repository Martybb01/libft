#include "libft.h"

// #include <string.h>

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
// int main()
// {
// 	char *str = "Hello World!";
// 	printf("%d\n", ft_strlen(str));
// 	printf("%lu\n", strlen(str));
// 	return (0);
// }

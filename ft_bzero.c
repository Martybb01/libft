#include "libft.h"

/* setting even just the first char in the array
	to 0 results in an empty string,
	regardless of what comes after. */
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

// int	main(void)
// {
// 	char	str[] = "Spiderman";
// 	size_t	n;

// 	n = 2;
// 	printf("str before bzero: %s\n", str);
// 	ft_bzero(str, n);
// 	printf("str after bzero: %s\n", str);
// 	return (0);
// }

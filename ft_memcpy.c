#include "libft.h"

// #include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest2;
	unsigned char	*src2;

	i = 0;
	dest2 = (unsigned char *)dest;
	src2 = (unsigned char *)src;
	while (i < n)
	{
		dest2[i] = src2[i];
		i++;
	}
	return (dest);
}

// int main()
// {
//     char src[] = "bohfjeifueg";
//     char dest[] = "spiderman";
//     char src2[] = "bohfjeifueg";
//     char dest2[] = "spiderman";
//     size_t n = 1;

//     ft_memcpy(dest, src, n);
//     memcpy(dest2, src2, n);
//     printf("src after memcpy: %s\n", src);
//     printf("dest after memcpy: %s\n", dest);
//     printf("src after memcpy: %s\n", src2);
//     printf("dest after memcpy: %s\n", dest2);
//     return (0);
// }

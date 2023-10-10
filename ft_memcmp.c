#include "libft.h"

/* confronta il numero specificato di byte del suo
primo argomento con i byte corrispondenti del suo secondo argomento.
Restituisce un valore > 0 se il primo argomento è > del secondo,
	0 se sono uguale e un valore < 0 se il primo argomento è < del secondo. */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

// int main()
// {
//     char str1[] = "ABCDEFG";
//     char str2[] = "ABCDXYZ";

//     printf("%d\n", ft_memcmp(str1, str2, 4));
//     printf("%d\n", ft_memcmp(str1, str2, 7));
//     printf("%d\n", ft_memcmp(str2, str1, 7));
//     return (0);
// }

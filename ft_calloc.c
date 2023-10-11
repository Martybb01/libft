#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(nitems * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, nitems * size);
	return (ptr);
}
// int main()
// {
//     char *str;
//     char *str2;
//     str = (char *)ft_calloc(10, sizeof(char));
//     str2 = (char *)calloc(10, sizeof(char));

//     printf("%s\n", str);
//     printf("%s\n", str2);
//     return (0);
// }

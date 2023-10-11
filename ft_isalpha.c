#include "libft.h"

// #include <ctype.h>

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
// int main()
// {
//     char c = 'a';
//     printf("%d\n", ft_isalpha(c));
//     printf("%d\n", isalpha(c));
//     return (0);
// }

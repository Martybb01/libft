#include "libft.h"

// #include <ctype.h>

int	ft_isprint(int c)
{
	if ((c >= 32 && c <= 126))
		return (1);
	else
		return (0);
}
// int main()
// {
//     char c = 'c';
//     printf("%d\n", ft_isprint(c));
//     printf("%d\n", isprint(c));
//     return (0);
// }

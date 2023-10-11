#include "libft.h"

// #include <ctype.h>

int	ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}
// int main()
// {
//     char c = '4';
//     printf("%d\n", ft_isdigit(c));
//     printf("%d\n", isdigit(c));
//     return (0);
// }

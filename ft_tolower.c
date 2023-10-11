#include "libft.h"

// #include <ctype.h>

int	ft_tolower(int c)
{
	if ((c >= 'A' && c <= 'Z'))
		return (c + 32);
	else
		return (c);
}

// int main()
// {
//     char c = 'M';
//     printf("%c\n", ft_tolower(c));
//     printf("%c\n", tolower(c));
//     return (0);
// }

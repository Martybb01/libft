#include "libft.h"

// #include <ctype.h>

int	ft_toupper(int c)
{
	if ((c >= 'a' && c <= 'z'))
		return (c - 32);
	else
		return (c);
}

// int main()
// {
//     char c = 'm';
//     printf("%c\n", ft_toupper(c));
//     printf("%c\n", toupper(c));
//     return (0);
// }

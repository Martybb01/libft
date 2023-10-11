#include "libft.h"

// #include <ctype.h>

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}
// int main()
// {
//     char c = 'f';
//     printf("%d\n", ft_isalnum(c));
//     printf("%d\n", isalnum(c));
//     return (0);
// }

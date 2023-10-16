/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marboccu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:11:00 by marboccu          #+#    #+#             */
/*   Updated: 2023/10/16 18:11:00 by marboccu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (i > 0)
	{
		if (s[i] == c)
			return ((char *)s + i);
		i--;
	}
	if (s[i] == c)
		return ((char *)s + i);
	return (NULL);
}

// int main()
// {
//     char str[] = "Hello World ciao!";
//     char c = 'a';
//     char *p;
//     char *p2;

//     p = ft_strrchr(str, c);
//     p2 = strrchr(str, c);

//     printf("%s", p);
//     printf("%s", p2);
//     return (0);
// }

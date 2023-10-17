/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marboccu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:08:24 by marboccu          #+#    #+#             */
/*   Updated: 2023/10/17 23:10:19 by marboccu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <string.h>

char *ft_strchr(const char *s, int c)
{
	size_t i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == c)
		return ((char *)s + i);
	return (NULL);
}

// int main()
// {
//     char str[] = "Hello World!";
//     char c = 'W';
//     char *p;
//     char *p2;

//     p = ft_strchr(str, c);
//     p2 = strchr(str, c);

//     printf("%s", p);
//     printf("%s", p2);
//     return (0);
// }

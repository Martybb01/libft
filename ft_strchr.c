/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marboccu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:08:24 by marboccu          #+#    #+#             */
/*   Updated: 2023/10/18 14:22:11 by marboccu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <string.h>

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
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

// int	main(void)
// {
// 	char	str[] = "Hello World!";
// 	char	c;
// 	char	*p;
// 	char	*p2;

// 	c = 'W';
// 	p = ft_strchr(str, c);
// 	p2 = strchr(str, c);
// 	printf("%s", p);
// 	printf("%s", p2);
// 	return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marboccu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:17:41 by marboccu          #+#    #+#             */
/*   Updated: 2023/10/16 18:17:42 by marboccu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;
	size_t	i;

	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end >= start && ft_strchr(set, s1[end - 1]))
		end--;
	str = (char *)malloc(sizeof(*s1) * (end - start + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (end > start)
	{
		str[i++] = s1[start++];
	}
	str[i] = '\0';
	return (str);
}

// int main(void)
// {
//     char s1[] = "Hello, world!";
//     char set[] = "Helrd!";
//     char *str;

//     str = ft_strtrim(s1, set);
//     printf("%s\n", str);
//     free(str);
//     return (0);
// }

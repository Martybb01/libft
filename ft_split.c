#include "libft.h"

static void declare_variables(size_t *i, size_t *start, size_t *word_count,
							  size_t *word_len)
{
	*i = 0;
	*start = 0;
	*word_count = 0;
	*word_len = 0;
}

char **ft_split(char const *s, char c)
{
	char **result;
	size_t i;
	size_t start;
	size_t word_count;
	size_t word_len;

	declare_variables(&i, &start, &word_count, &word_len);
	result = (char **)malloc(sizeof(char *) * (ft_strlen(s) + 1));
	if (!result)
		return (NULL);
	while (i++ <= ft_strlen(s))
	{
		if (s[i] == c || s[i] == '\0')
		{
			word_len = i - start;
			result[word_count] = (char *)malloc(sizeof(char) * (word_len + 1));
			if (!result[word_count])
				return (NULL);
			ft_strlcpy(result[word_count], &s[start], word_len + 1);
			start = i + 1;
			word_count++;
		}
	}
	result[word_count] = NULL;
	return (result);
}

int main(void)
{
	char **result;
	char *s;
	char c;

	s = "Hello World";
	c = ' ';
	result = ft_split(s, c);
	printf("%s\n", result[0]);
	printf("%s\n", result[1]);
	return (0);
}

#include "libft.h"

/* Applica una funzione specificata dall'utente a ciascun carattere di una stringa. La funzione prende due argomenti:

s: La stringa da cui applicare la funzione.
f: Una funzione che prende come argomenti un indice e un carattere e restituisce un carattere.

La funzione ft_strmapi() alloca una nuova stringa della stessa lunghezza di s più un carattere nullo terminatore. Per ogni carattere di s,
	la funzione f() viene applicata al carattere e il risultato viene scritto nella nuova stringa. Una volta completata l'iterazione,
	la nuova stringa viene restituita.

Se s è null o f è null, la funzione restituisce null.

Può essere utilizzata per implementare una varietà di operazioni sulle stringhe,
	come convertire una stringa in maiuscolo o minuscolo,
	rimuovere gli spazi bianchi o invertire l'ordine dei caratteri. */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!s || !f || !str)
		return (NULL);
	while (s[i])
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// char my_toupper(unsigned int i, char c)
// {
//     return (ft_toupper(c));
// }

// int main()
// {
//     char const *s = "Hello, world!";

//     char *str = ft_strmapi(s, my_toupper);

//     printf("%s\n", str);
//     free(str);
//     return (0);
// }

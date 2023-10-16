#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *new;

    new = (t_list *)malloc(sizeof(*new));
    if (!new)
        return (NULL);
    new->content = content;
    new->next = NULL;
    return (new);
}
// int main()
// {
//     char *str = "Hello World!";
//     t_list *new = ft_lstnew(str);
//     printf("%s\n", (char *)new->content);
//     return (0);
// }

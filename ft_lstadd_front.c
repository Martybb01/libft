#include "libft.h"

/* To add a new node at the beginning of a singly linked list in C, you'll need to perform the following steps:
1. Create a new node with the desired data.
2. Make the next pointer of the new node point to the current head of the list.
3. Update the head of the list to be the new node. */

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (lst)
    {
        new->next = *lst;
        *lst = new;
    }
}
// int main()
// {
//     t_list *list = NULL;
//     char *str = "Hello World!";
//     char *str2 = "Spiderman";
//     t_list *node1 = ft_lstnew(str);
//     t_list *node2 = ft_lstnew(str2);
//     ft_lstadd_front(&list, node1);
//     ft_lstadd_front(&list, node2);
//     printf("%s\n", (char *)list->content);
//     printf("%s\n", (char *)list->next->content);
// }

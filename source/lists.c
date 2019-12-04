/*
** EPITECH PROJECT, 2019
** lists.c
** File description:
** pushswap : functions to create, manipulate and free lists
*/

int create_list_unit(list *l_a, list *previous, list *next, int nb)
{
    l_a = malloc(sizeof(list));
    if (l_a == NULL)
        return (84);
    l_a->nb = nb;
    l_a->previous = previous;
    l_a->next = next;
    previous->next = l_a;
    next->previous = l_a;
    return (0);
}

void free_list_unit(list *l_a)
{
    (l_a->next)->previous = l_a->previous;
    (l_a->previous)->next = l_a->next;
    free(l_a);
}

void free_list(list *l_a)
{
    while (l_a != NULL) {
        l_a = l_a->next;
        free_list_unit(l_a->previous);
    }
}

int get_list(int argc, char **argv, list *l_a)
{
    list *l_a_copy = l_a;

    if (create_list_unit(l_a_copy, NULL, NULL, str_to_int(argv[1])) == 84)
        return (84);
    for (int i = 2; i < argc, i++, l_a = l_a->next) {
        if (create_list_unit(NULL, l_a, NULL, str_to_int(argv[i])) == 84)
            return (84);
    }
}
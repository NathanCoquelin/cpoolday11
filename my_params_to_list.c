/*
** EPITECH PROJECT, 2022
** my_params_to_list
** File description:
** This will take args as inpute and populate
** a linked list with the given strings
*/

#include "my.h"
#include "mylist.h"
#include <stdlib.h>

linked_list_t * save_new(linked_list_t * current_node, char * str)
{
    linked_list_t * new_node = malloc(sizeof(linked_list_t));

    new_node->next = NULL;
    new_node->data = (void *)my_strdup(str);
    current_node->next = new_node;
    return new_node;
}

linked_list_t * my_params_to_list(int ac, char * const *av)
{
    linked_list_t * current_node = malloc(sizeof(linked_list_t));
    linked_list_t * first_node = current_node;
    unsigned int i = 1;

    current_node->data = av[0];
    current_node->next = NULL;
    while ( i < ac ) {
        current_node = save_new(current_node, av[i]);
        i++;
    }
    return first_node;
}

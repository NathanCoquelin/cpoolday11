/*
** EPITECH PROJECT, 2022
** my_list_size
** File description:
** This will return the number of nodes there
** are in a linked list
*/

#include "my.h"
#include <stdlib.h>
#include "mylist.h"

linked_list_t * my_params_to_list(int ac, char * const *av);

int my_list_size(linked_list_t const *begin)
{
    unsigned int i = 0;

    while (begin->next != NULL) {
        i++;
        begin = begin->next;
    }
    return i;
}

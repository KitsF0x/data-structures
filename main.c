#include <stdio.h>

#include "linked_list.h"

int main()
{
    _node *node = create_empty_node(2); 
    node->next = NULL;
    node->prev = NULL;
    list_insert_begin(node, 5);
    list_insert_begin(node, 3);
    list_delete_begin(node);
    list_insert_begin(node, 1);
    printf("%d\n", list_get_element_at(node, 0));
    printf("%d\n", list_get_element_at(node, 1));
}
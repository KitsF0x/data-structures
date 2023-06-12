#include "linked_list.h"

_node *create_empty_node(int value)
{
    _node *n = (_node *)malloc(sizeof(_node));
    n->next = NULL;
    n->prev = NULL;
    n->value = value;
    return n;
}

_node *list_insert_begin(_node *node, int value)
{
    node = get_first_element_of_the_list_from_node(node);
    node->prev = (_node *)malloc(sizeof(_node));
    node->prev->value = value;
    node->prev->next = node;
    node->prev->prev = NULL;
    return node->prev;
}

int list_count(_node *node)
{
    node = get_first_element_of_the_list_from_node(node);
    int counter = 0;
    while (node->next != NULL)
    {
        node = node->next;
        counter++;
    }
    return counter;
}

_node *list_delete_begin(_node *node)
{
    node = get_first_element_of_the_list_from_node(node);
    _node *second = node->next;
    node->value = 0;
    node->next->prev = NULL;
    node->next = NULL;
    free(node);
    return second;
}

int list_get_element_at(_node *node, int el)
{
    node = get_first_element_of_the_list_from_node(node);
    for (int i = 0; i < el; i++)
    {
        node = node->next;
    }
    return node->value;
}

_node *get_first_element_of_the_list_from_node(_node *node)
{
    while (node->prev != NULL)
    {
        node = node->prev;
    }
    return node;
}

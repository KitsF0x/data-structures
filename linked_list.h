#pragma once

#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

typedef struct _node
{
    struct _node *prev;
    struct _node *next;
    int value;
} _node;

/// @brief Creates a new node with next and prev set to null.
/// @param value Value of the element.
/// @return Pointer to the new element.
_node *create_empty_node(int value);

/// @brief Inserts element at the beginning of the list.
/// @param node Node in the list(doesn't have to be the first element).
/// @param value Value of the new element.
/// @return Pointer to the first(newly inserted) node.
_node *list_insert_begin(_node *node, int value);

/// @brief Returns number of elements in the list.
/// @param node Node in the list(doesn't have to be the first element).
/// @return Number of elements in the list.
int list_count(_node *node);

/// @brief Deletes first element of the list.
/// @param node Node in the list(doesn't have to be the first element).
/// @return Pointer to the first element after deletion.
_node *list_delete_begin(_node *node);

/// @brief Returns value of the element at passed id.
/// @param node Node in the list(doesn't have to be the first element).
/// @param el Index of the element.
/// @return Value of the element.
int list_get_element_at(_node* node, int el);

/// @brief Returns pointer to the first element of the list of the passed element.
/// @param node Node of the list.
/// @return First element of the list.
_node *get_first_element_of_the_list_from_node(_node *node);
#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: Node Parent
 * @value: value to store in the new node
 * Return:pointer to the created node, or NULL on failure
 * or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *temp;

    if (!parent)
        return NULL;

    temp = binary_tree_node(parent, value);
    if (temp == NULL)
        return NULL;
    

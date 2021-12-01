#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right child of another node
 * @parent: pointer to the node to insert the right child in
 * @value: value to store in the new node
 * Return: a pointer to the created node, otherwise return NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *temp;

    if (!parent)
        return NULL;
    temp = binary_tree_node(parent, value);
    if (temp == NULL)
        return NULL;
    temp->right = parent->right;
    if (parent->right)
        parent->right->parent = temp;
    parent->right = temp;
    return (temp);
}

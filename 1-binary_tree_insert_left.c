#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of
 * another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: pointer to the new node, NULL faliur or parent NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *temp;

    if (!parent)
        return NULL;

    temp = binary_tree_node(parent, value);
    if (temp == NULL)
        return NULL;
    temp->left = parent->left;
    if (parent->left)
        parent->left->parent = temp;
    parent->left = temp;
    return (temp);
}
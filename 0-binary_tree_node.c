#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node
 * @value: value of the new node.
 * Return: pointer to the new node or NULL
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *temp = malloc(sizeof(binary_tree_t));

    if (temp == NULL)
        return (NULL);
    temp->parent = parent;
    temp->n = value;
    temp->left = temp->right = NULL;
    return (temp);

}

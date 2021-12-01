#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right child of another node
 * @parent: pointer to the node to insert the right child in
 * @value: value to store in the new node
 * Return: a pointer to the created node, otherwise return NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (!new)
		return (NULL);
	new->right = parent->right;
	if (parent->right)
		parent->right->parent = new;
	parent->right = new;
	return (new);
}

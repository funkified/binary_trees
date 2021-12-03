#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of tree or 0 if is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int right_height;
	int left_height;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	right_height = binary_tree_height(tree->right) + 1;
	left_height = binary_tree_height(tree->left) + 1;

	if (right_height > left_height)
		return (right_height);
	else
		return (left_height);
}

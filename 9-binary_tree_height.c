#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of binary tree
 * @tree: Pointer to the root node
 * Return: Height of the binary tree otherwise 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t x, y;

	if (tree == NULL)
		return (0);
	x = binary_tree_height(tree->left);
	y = binary_tree_height(tree->right);

	return (1 + (x > y ? x : y));
}

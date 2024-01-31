#include "binary_trees.h"

/**
* binary_tree_height - Measures the height of binary tree
* @tree: Pointer to the root node
* Return: Height of the binary tree otherwise 0
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t x, y;

		x = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		y =  tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return (x > y ? x : y);
	}
	return (0);
}

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to the root node
 * Return: Size of the binary tree otherwise 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node
 * Return: 1 if the tree is perfect otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, size;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	size = binary_tree_size(tree);

	return ((size_t)(1 << height) - 1 == size);

}

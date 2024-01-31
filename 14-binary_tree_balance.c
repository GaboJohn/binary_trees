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
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node
 * Return: Balance factor of the binary tree otherwise 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);

}

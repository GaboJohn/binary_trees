#include "binary_trees.h"

/**
 * binary_tree_node - Create binary tree node
 * @parent: Pointer to parent node
 * @value: Value to put in new node
 * Return: Pointer to new node otherwise NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *x;

	x = malloc(sizeof(binary_tree_t));
	if (x == NULL)
		return (NULL);

	x->parent = parent;
	x->n = value;
	x->right = NULL;
	x->left = NULL;

	return (x);
}

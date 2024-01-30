#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node
 * @parent: Pointer to node to insert left-child
 * @value: Value to store in new node
 * Return: Pointer to node otherwise NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *x;

	if (parent == NULL)
		return (NULL);

	x = malloc(sizeof(binary_tree_t));
	if (x == NULL)
		return (NULL);

	x->parent = parent;
	x->n = value;
	x->right = NULL;
	x->left = NULL;

	if (parent->left != NULL)
	{
		x->left = parent->left;
		x->left->parent = x;
	}

	parent->left = x;

	return (x);
}

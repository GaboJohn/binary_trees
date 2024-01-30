#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node
 * @parent: Pointer to node to insert right-child
 * @value: Value to store in new node
 * Return: Pointer to the created node otherwise NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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

	if (parent->right != NULL)
	{
		x->right = parent->right;
		x->right->parent = x;
	}
	parent->right = x;
	return (x);
}

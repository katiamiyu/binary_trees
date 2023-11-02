#include "binary_trees.h"
/**
 * binary_tree_is_root - function to check root
 * @node: pointer to check
 *
 * Return: 1 is_root; 0 not root
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL)
		if (node->parent == NULL)
			return (1);
	return (0);
}

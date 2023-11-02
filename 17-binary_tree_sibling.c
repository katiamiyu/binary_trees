#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_sibling - find sibling node
 * @node: node to find sibling
 *
 * Return: pointer (success), NULL (failure)
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node == node->parent->left)
	{
		return (node->parent->right);
	}

	else
		return (node->parent->left);
}

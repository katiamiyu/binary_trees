#include "binary_trees.h"

/**
 * binary_tree_depth - depth of a binary tree
 * @tree: node
 * Return: 1 success, 2 fail, else 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
	{
		return (0);
	}
	while (tree)
	{
		tree = tree->parent;
		depth++;
	}
	return (depth - 1);
}

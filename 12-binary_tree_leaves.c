#include "binary_trees.h"
/**
 * binary_tree_leaves - binary tree leaves count
 * @tree: node to count leaves
 * Return: 1 success,2 fail, else 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else if ((tree->left == NULL) && (tree->right == NULL))
	{
		return (1);
	}
	leaves = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	return (leaves);
}

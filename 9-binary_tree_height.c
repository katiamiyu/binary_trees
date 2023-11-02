#include "binary_trees.h"
size_t recurse_for_height(const binary_tree_t *tree);
/**
 * binary_tree_height - height of tree
 * @tree: tree
 *
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (recurse_for_height(tree) - 1);
}
/**
 * recurse_for_height - find height
 * @tree: tree
 *
 * Return: height
 */
size_t recurse_for_height(const binary_tree_t *tree)
{
	size_t height_right, height_left;

	if (!tree)
		return (0);

	height_left = recurse_for_height(tree->left);
	height_right = recurse_for_height(tree->right);

	if (height_left > height_right)
		return (height_left + 1);
	else
		return (height_right + 1);
}

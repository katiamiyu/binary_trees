#include "binary_trees.h"
int recurse_full(const binary_tree_t *tree);
/**
 * binary_tree_is_full - checks tree is full
 * @tree: root of tree
 *
 * Return: 1 isfull; 0 notfull
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (recurse_full(tree));
}
/**
 * recurse_full - content of full check
 * @tree: root of tree
 *
 * Return: 1 isfull, 0 notfull
 */
int recurse_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	else if (!tree->left && !tree->right)
		return (1);
	else
		return (recurse_full(tree->left) * recurse_full(tree->right));
}

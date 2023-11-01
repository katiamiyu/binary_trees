#include "binary_trees.h"
/**
 * binary_tree_insert_left - add node to left side
 * @parent: pointer to parent node
 * @value: node value
 *
 * Return: created node or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newn = NULL;

	if (parent == NULL)
		return (NULL);

	newn = malloc(sizeof(binary_tree_t));
	if (!newn)
		return (NULL);

	newn->n = value;
	newn->parent = parent;
	newn->left = NULL;
	newn->right = NULL;

	if (parent->left != NULL)
	{
		newn->left = parent->left;
		parent->left->parent = newn;
	}
	parent->left = newn;

	return (newn);
}

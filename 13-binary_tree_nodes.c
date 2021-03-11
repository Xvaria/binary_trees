#include "binary_trees.h"

/**
 *
 *
 *
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t n = 0;

	if (!tree)
		return (0);
	if (tree->left)
		n += binary_tree_nodes(tree->left) + 1;
	if (tree->right)
		n += binary_tree_nodes(tree->right) + 1;
	if (!tree->parent)
		n -= 1;
	return (n);
}

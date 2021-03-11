#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	if (node->parent)
	{
		if (node->parent->parent)
		{
			if (node == node->parent->parent->left->left ||
			    node == node->parent->parent->left->right)
			{
				if (node->parent->parent->right)
					return (node->parent->parent->right);
			}
			if (node == node->parent->parent->right->right ||
			    node == node->parent->parent->right->left)
			{
				if (node->parent->parent->left)
					return (node->parent->parent->left);
			}
		}
	}
	return (NULL);
}

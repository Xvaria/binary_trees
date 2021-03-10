#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: nparent or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nparent;

	nparent = malloc(sizeof(binary_tree_t));
	if (!nparent)
		return (NULL);
	nparent->parent = parent;
	nparent->n = value;
	nparent->left = NULL;
	nparent->right = NULL;

	return (nparent);
}

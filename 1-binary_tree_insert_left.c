#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: nnode or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *nnode;

	if (!parent)
		return (NULL);
	nnode = malloc(sizeof(binary_tree_t));
	if (!nnode)
		return (NULL);
	nnode->parent = parent;
	nnode->left = NULL;
	nnode->right = NULL;
	if (parent->left)
	{
		nnode->left = parent->left;
		nnode->left->parent = nnode;
	}
	if (nnode->parent)
		parent->left = nnode;
	nnode->n = value;
	return (nnode);
}

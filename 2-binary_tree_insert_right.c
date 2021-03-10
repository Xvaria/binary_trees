#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * Return: nnode or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
        if (parent->right)
        {
                nnode->right = parent->right;
                nnode->right->parent = nnode;
        }
        if (nnode->parent)
                parent->right = nnode;
        nnode->n = value;
        return (nnode);
}

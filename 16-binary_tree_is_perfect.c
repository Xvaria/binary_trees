#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
        size_t l = 0, r = 0;

        if (!tree || (!tree->left && !tree->right))
                return (0);
        l += binary_tree_height(tree->left) + 1;
        r += binary_tree_height(tree->right) + 1;
        if (l > r)
                return (l);
        else
                return (r);
}

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 0 or 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
        if (!tree)
        {
                return (0);
        }
	if (binary_tree_height(tree->left) != binary_tree_height(tree->right))
	{
		return (0);
        }
	if (!tree->left && !tree->right)
        {
                return (1);
        }
        if ((tree->left && tree->right) &&
	    (tree->left->parent == tree->right->parent))
        {
                return (binary_tree_is_perfect(tree->left)
                        * binary_tree_is_perfect(tree->right));
        }
        return (0);
}

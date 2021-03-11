#include "binary_trees.h"
int get_count(const binary_tree_t *tree);

/**
 * binary_tree_balance -  measures the balance factor of a binary tree
 * @tree: pointer to root node
 * Return: balance factor of the binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l_count, r_count;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	l_count = get_count(tree->left);
	r_count = get_count(tree->right);
	return (l_count - r_count);
}

/**
 * get_count - count the height of a binary tree
 * @tree: pointer to binary tree to count height of
 * Return: height of the tree
 */

int get_count(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	left = get_count(tree->left) + 1;
	right = get_count(tree->right) + 1;

	if (left > right)
		return (left);
	else
		return (right);
}

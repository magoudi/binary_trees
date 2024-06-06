#include "binary_trees.h"

/**
 * count - counts
 * @tree: points to a tree
 * Return: returns count
*/

int count(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (tree == NULL)
		return (0);
	l = count(tree->left);
	r = count(tree->right);
	return (l + r + 1);
}

/**
 * binary_tree_height_b - Measures height of a binary tree for a bal tree
 * @tree: tree to go through
 * Return: the height
 */

int binary_tree_height_b(const binary_tree_t *tree)
{
	int l = 0;
	int r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			l = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
			r = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
		}
		return ((l > r) ? l : r);
	}
}

/**
 * binary_tree_balance - Measures balance factor of a binary tree
 * @tree: tree to go through
 * Return: balanced factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0, total = 0;

	if (tree)
	{
		left = ((int)binary_tree_height_b(tree->left));
		right = ((int)binary_tree_height_b(tree->right));
		total = left - right;
	}
	return (total);
}

/**
 * binary_tree_is_perfect - calculates if binary tree is full
 * @tree: the tree
 * Return: one when full
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int h = 0, n = 0;

	if (!tree)
		return (0);
	h = binary_tree_height_b(tree);
	n = count(tree);
	if (h == 1)
		return (1);
	if (h * h == n + 1 && binary_tree_balance(tree) == 0)
		return (1);
	return (0);
}

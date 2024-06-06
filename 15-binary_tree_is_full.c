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
 * binary_tree_is_full - calculates if binary tree is full
 * @tree: the tree
 * Return: one when full
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	int h = 0, n = 0;

	if (!tree)
		return (0);
	h = binary_tree_height_b(tree);
	n = count(tree);
	if (h * h == n + 1)
		return (1);
	return (0);
}

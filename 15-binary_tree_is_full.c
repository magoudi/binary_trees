#include "binary_trees.h"

/**
 * count - counts
 * @tree: points to a tree
 * Return: returns count
*/

int count(const binary_tree_t *tree)
{
	int l, r;

	if (tree == NULL)
		return (0);
	l = count(tree->left);
	r = count(tree->right);
	return (l + r + 1);
}

/**
 * binary_tree_height_c - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of the tree
 */

size_t binary_tree_height_c(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			l = tree->left ? 1 + binary_tree_height_c(tree->left) : 0;
			r = tree->right ? 1 + binary_tree_height_c(tree->right) : 0;
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
	int h, n;

	h = binary_tree_height_c(tree);
	n = count(tree);

	if (h * h == n - 1)
		return (1);
	return (0);
}

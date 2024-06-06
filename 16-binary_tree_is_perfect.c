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
 * binary_tree_height_b - Measures height of a binary tree for a bal tree
 * @tree: tree to go through
 * Return: the height
 */

int binary_tree_height_b(const binary_tree_t *tree)
{
	int l, r;

	l = 0;
	r = 0;
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
	int left_height, right_height, left_count, right_count;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height_b(tree->left);
	right_height = binary_tree_height_b(tree->right);
	left_count = count(tree->left);
	right_count = count(tree->right);

	if (left_height != right_height)
		return (0);
	if (left_count != right_count)
		return (0);
	if (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right))
		return (1);
	return (1);
}

#include "binary_trees.h"

/**
 * binary_tree_leaves - jfngjnsfgnalwestj
 * @tree: slkgnalsnefbndafjgn
 * Return: slfgjnvalsgnngvsdg
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l, r;

	if (!tree)
		return (0);
	l = binary_tree_leaves(tree->left);
	r = binary_tree_leaves(tree->right);
	if (l + r == 0)
	{
		return (1);
	}
	return (l + r);
}

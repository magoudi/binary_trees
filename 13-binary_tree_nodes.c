#include "binary_trees.h"

/**
 * binary_tree_nodes - jfngjnsfgnalwestj
 * @tree: slkgnalsnefbndafjgn
 * Return: slfgjnvalsgnngvsdg
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t l, r;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
	{
		return (0);
	}
	l = binary_tree_nodes(tree->left);
	r = binary_tree_nodes(tree->right);
	return (l + r + 1);
}

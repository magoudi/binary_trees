#include "binary_trees.h"

/**
 * binary_tree_is_leaf - dfjngvnefgnonfgvjnwfgna
 * @node: dfngengfnedgnsgf
 * Return: fjnansgn
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}

/**
 *binary_tree_depth - ieguhsgdfuojug
 *@tree: tree
 *Return: depth of tree
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->parent == NULL)
		return (0);
	return (binary_tree_depth(tree->parent) + 1);
}


/**
 * binary_tree_is_heap - heap
 * @tree: tree
 * Return: return
*/

int binary_tree_is_heap(const binary_tree_t *tree)
{
	
}
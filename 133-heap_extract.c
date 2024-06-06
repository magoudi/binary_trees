#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
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
			l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
			r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		}
		return ((l > r) ? l : r);
	}
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
 * find_leaf - find
 * @node: node
 * @h: h
 * Return: return
*/

heap_t *find_leaf(heap_t *node, size_t h)
{
	if (binary_tree_depth((binary_tree_t *) node) == h)
		return (node);
	return (find_leaf(node->left, h));
	return (find_leaf(node->right, h));
}

/**
 * swap - swap
 * @p1: p1
 * @p2: p2
 * Return: return
*/

void swap(heap_t **p1, heap_t **p2)
{
	int tmp;

	tmp = (*p1)->n;
	(*p1)->n = (*p2)->n;
	(*p2)->n = tmp;
}

/**
 * heap_extract - extract
 * @root: root
 * Return: return
*/

int heap_extract(heap_t **root)
{
	heap_t *leaf, *tmp;
	int done = 0;
	int ret = 0;
	size_t h;

	if (!root)
		return (0);
	h = binary_tree_height(*root);
	leaf = find_leaf(*root, h);
	swap(&leaf, root);
	ret = leaf->n;
	free(leaf);
	tmp = *root;
	while (!done)
	{
		if (!tmp->left)
		{
			if (!tmp->right)
				return (ret);
			if (tmp->n < tmp->right->n)
				swap(&tmp, &(tmp->right));
		}
		else if (!tmp->right)
		{
			if (tmp->n < tmp->left->n)
				swap(&tmp, &(tmp->left));
		}
		else if (tmp->n < tmp->left->n && tmp->left->n > tmp->right->n)
		{
			swap(&tmp, &(tmp->left));
		}
		else if (tmp->n < tmp->right->n && tmp->left->n < tmp->right->n)
		{
			swap(&tmp, &(tmp->right));
		}
		else
			return (ret);
	}
}

#include "binary_trees.h"

/**
 * binary_trees_ancestor - ancestor
 * @first: first
 * @second: second
 * Return: return
*/

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									const binary_tree_t *second)
{
	if (!first || !second || !first->parent || !second->parent)
		return (NULL);
	if (first->parent == second->parent)
		return (first->parent);
	else
		return (binary_trees_ancestor(first->parent, second->parent));
}

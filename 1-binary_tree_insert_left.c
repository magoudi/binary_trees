#include "binary_trees.h"

/*
 * binary_tree_insert_left - qisrgoiqrsgijasekf
 * @parent: dsfjgiajesigasngdasbg
 * @value: nasefjasfojaefsi
 * Return: sudhgiohaesufhijgf
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
	{
		return (NULL);
	}
	newnode = binary_tree_node(parent, value);
	if (newnode == NULL)
	{
		return (NULL);
	}
	if (parent->left != NULL)
	{
		parent->left->parent = newnode;
		newnode->left = parent->left;
	}
	parent->left = newnode;
	return (newnode);
}

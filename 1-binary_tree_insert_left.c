#include "binary_trees.h"

/*binary_tree_insert_left - qisrgoiqrsgijasekf
 * @parent: dsfjgiajesigasngdasbg
 * @value: nasefjasfojaefsi
 * Return: sudhgiohaesufhijgf
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;
	newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL || parent == NULL)
	{
		return (NULL);
	}
	
	newnode->parent = parent;
	newnode->n = value;
	newnode->right = NULL;

	if (parent->left == NULL)
	{
		newnode->left = parent->left;
	}
	else
	{
		newnode->left = NULL
	}

	parent->left = newnode;

	return (newnode);
}

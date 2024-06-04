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
	newnode->left = parent->left;
	

	parent->left = newnode;

	return (newnode);
}

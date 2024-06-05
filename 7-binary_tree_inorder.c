#include "binary_trees.h"

/**
 * binary_tree_inorder - jwdnfbjnvdjfgnvlasnghbljns
 * @tree: skjfngansflkansdjgbvalkfsgbn
 * @func: kfsjgnvkjsangdkjdbfvcbsjkdgbnsd
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
                return;
        binary_tree_preorder(tree->left, func);
        binary_tree_preorder(tree->right, func);
	func(tree->n);
}

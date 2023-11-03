#include "binary_trees.h"

/**
 * binary_tree_rotate_right - performs a right rotation on a BT
 * @tree: pointer to the root node
 * Return: pointer to new node
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *nroot, *nrootrightchild, *parent;

	if (tree == NULL || tree->left == NULL)
		return (tree);

	/*storing the ref of the nodes invloved */
	parent = tree;
	nroot = tree->left;
	nrootrightchild = nroot->right;

	/* rotating right */
	parent->left = nrootrightchild;
	if (nrootrightchild != NULL)
		nrootrightchild->parent = parent;

	nroot->right = parent;
	nroot->parent = parent->parent;
	parent->parent = nroot;

	return (nroot);
}

#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_rotate_left - performs left-rotation on a binary tree
 * @tree: pointer to root node
 * Return: a pointer to the new root node
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *nroot;

	if (!tree)
		return (NULL);

	tree->parent = tree->right;
	nroot = tree->parent;
	tree->right = nroot->left;
	nroot->left = tree;
	nroot->parent = NULL;
	if (tree->right)
		tree->right->parent = tree;
	return (nroot);
}

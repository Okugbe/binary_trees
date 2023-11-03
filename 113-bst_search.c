#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_size - weighs the size of a binary tree
 * @tree: Binary tree
 * Return: Size of binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);
	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);
	return (1 + left + right);
}

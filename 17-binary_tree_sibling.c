#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_sibling - locates the sibling of a node
 * @node: pointer to the node to locate it's sibling
 * Return: a pointer to sibling of the node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}

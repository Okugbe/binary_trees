#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to  node to measure the depth
 * Return: Depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *current;
	size_t depth = 0;

	if (!tree)
		return (0);
	current = tree;
	while (current->parent != NULL)
	{
		depth++;
		current = current->parent;
	}
	return (depth);
}

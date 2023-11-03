#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_trees_ancestor - Locates the lowest common ancestor of two nodes
 * @first: A pointer to  first node
 * @second: A pointer to the second node
 * Return: A pointer to lowest common ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *hold;

	if (!first || !second)
		return (NULL);
	hold = (binary_tree_t *) second;
	while (first)
	{
		while (second)
		{
			if (first == second)
				return ((binary_tree_t *) first);
			second = second->parent;
		}
		second = hold;
		first = first->parent;
	}
	return (NULL);
}

#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_right -  inputs a node as the
 * right-child of another node
 *
 * @parent: Parent of the node
 * @value: Value of node
 * Return: A pointer to a newly created node or NULL during failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nnode;

	if (parent == NULL)
		return (NULL);

	nnode = binary_tree_node(NULL, value);
	if (nnode == NULL)
		return (NULL);

	nnode->right = parent->right;
	if (nnode->right != NULL)
		nnode->right->parent = nnode;
	parent->right = nnode;
	nnode->parent = parent;
	return (nnode);
}

#include "binary_trees.h"

/**
 * binary_tree_is_root - function that checks if a node is a root.
 * @node: nodes in binary trees.
 * Return: 1 if node is a leaf,0 otherwise
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && !node->parent)
		return (1);

	return (0);
}

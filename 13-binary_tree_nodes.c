#include "binary_trees.h"

/**
 * binary_tree_nodes - A func that counts the leaves in a binary tree
 * @tree: pointer to the root node in the binary tree
 * Return: No. of leaves in a binary tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
		nodes += 1;

	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);
	return (nodes);
}

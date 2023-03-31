#include "binary_trees.h"

/**
 * binary_tree_size - function that finds the size of a binary tree.
 * @tree: Pointer at the root of tree.
 * Return: The size of a binary node.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}

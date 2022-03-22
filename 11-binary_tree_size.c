#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_preorder - function that goes through a binary tree
 * @tree: pointer to root
 * @func: pointer to function to call each node
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

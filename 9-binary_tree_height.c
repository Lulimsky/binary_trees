#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a bt
 * @tree: pointer to root
 * Return: 0 or height of binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	size_t height_l;
	size_t height_r;

	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	if (height_l > height_r)
		return (height_l);
	else
		return (height_r);
}

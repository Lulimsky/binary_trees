#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node
 * @tree: pointer to node
 * Return: depth of node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	size_t depth;

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}

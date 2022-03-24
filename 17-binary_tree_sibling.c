#include <stdlib.h>
#include "binary_trees.h"

/**
  * binary_tree_sibling - finds the sibling of a node
  * @node: root of tree to check
  * Return: binary_tree_t sibling or NULL if not
  */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);

	return (node->parent->left);
}

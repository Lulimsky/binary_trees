#include <stdlib.h>
#include "binary_trees.h"

/**
  * binary_tree_uncle - finds the uncle of a node
  * @node: node to check it's uncle
  * Return: uncle node or NULL
  */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer of a node to find the sibling
 * Return: parent node or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);

	return (node->parent->left);
}

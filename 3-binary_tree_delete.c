#include <stdlib.h>

#include "binary_trees.h"
/**
 * binary_tree_delete - function that deletes an entire bianry tree
 * @tree: pointer to tree
 */
void binary_tree_delete(binary_tree_t *tree)
{
if (!tree)
	return;
binary_tree_delete(tree->right);
binary_tree_delete(tree->left);

free(tree);
}

#include <stdlib.h>

#include "binary_trees.h"
/**
 * binary_tree_insert_right - function that insert a node as right-child of another node
 * @parent: is a pointer to the node to insert the right-child side
 * @value: value to store in the new node
 * Return: pointer to the new node or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (!parent)
		return (NULL);

	binary_tree_t *new = malloc(sizeof(binary_tree_t));
	
  if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = parent->right;
	parent->right = new;
	
  if (new->right)
		new->right->parent = new;
	
  return (new);
}

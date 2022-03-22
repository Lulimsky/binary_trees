#include <stddef.h>
#include <stdlib.h>

#include "binary_trees.h"
/**
 * binary_tree_insert_left - function that insert a node as left-child
 * @parent: is a pointer to the node to insert the left-child in
 * @value: is the value to store in the new node
 * Return: pointer to the new node or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (!parent)
		return (NULL);

  binary_tree_t *new = malloc(sizeof(binary_tree_t));
	
  if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->right = NULL;
	new->left = parent->left;
	parent->left = new;
	
  if (new->left)
		new->left->parent = new;
	
  return (new);
}

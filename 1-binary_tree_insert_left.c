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
	binary_tree_t *next;

	if (!parent)
		return (NULL);

	next = malloc(sizeof(binary_tree_t));

	if (!next)
		return (NULL);

	next->n = value;
	next->parent = parent;
	next->right = NULL;
	next->left = parent->left;
	parent->left = next;

	if (next->left)
		next->left->parent = next;

	return (next);
}
